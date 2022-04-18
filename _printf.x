#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
* printID - print char
* @next: character after %
* @list: argument
* Return: charectotrs
*/

int printID(char next, va_list list)
{
	int functsIndex;

	print functs[] = {
	{"c", print_char},
	{"s", print_str},
	{NULL, NULL}
	};

/*
* int print_c(va_list c);
* int print_s(va_list s);
* int print_S(va_list S);
* int print_rs(va_list rs);
* int print_rot(va_list ro);
* int _print_i(va_list vi);
* int _print_b(va_list b);
*/

	for (functsIndex = 0; functs[functsIndex].t != NULL; functsIndex++)
	{
		if (functs[functsIndex].t[0] == next)
			return (functs[functsIndex].f(list));
	}
	return (0);
}


/**
* _printf - prints anything
* @format: pointer to string that contains specifiers
* Return: number of characters printed
**/

int _printf(const char *format, ...)
{
	unsigned int i;
	int identifierPrinted = 0, charPrinted = 0;
	va_list list;

	va_start(list, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charPrinted++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charPrinted++;
			i++;
			continue;
		}

		if (format[i + 1] == '\0')
			return (-1);

		identifierPrinted = printID(format[i + 1], list);
		if (identifierPrinted == -1 || identifierPrinted != 0)
			i++;
		if (identifierPrinted > 0)
			charPrinted += identifierPrinted;

		if (identifierPrinted == 0)
		{
			_putchar('%');
			charPrinted++;
		}
	}
	va_end(list);
	return (charPrinted);
}
