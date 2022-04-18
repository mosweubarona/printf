#include "main.h"
#include <stdio.h>
/**
* _printf - prints anything
* @format: pointer to string that contains specifiers
* Return: number of characters printed
**/

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	int (*f)(va_list);
	va_list list;

	if (format == '\0')
		return (-1);
	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else if (format[i] == '\0')
		{
			return (count);
		}
		else if (format[i] == '%')
		{
			f = getspecifier(format, i + 1);
			i += 1;
			if (f == NULL)
			{
				count += strange(format, i);
			}
			else
			{
				count = count + f(list);
				if (format[i] == '+' || format[i] == ' ' || format[i] == '#')
					i++;
			}
		}
		i++;
	}
	va_end(list);
	return (count);
}
