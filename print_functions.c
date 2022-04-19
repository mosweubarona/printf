#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_char - write char
 * @arg: argument
 * Return: on success 0.
 */

int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_int - print int
 * @arg: argument
 * Return: on succes 0.
 */

int print_int(va_list arg)
{
	unsigned int divisor = 1, i, resp, charPrinted = 0;
	int n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		charPrinted++;
		n *= -1;
	}

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10, charPrinted++)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
	return (charPrinted);
}

/**
 * print_STR - string
 * @arg: argument
 * Return: charector
 */

int print_STR(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] < 32 && str[i] > 0) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (i < 16)
				_putchar('0');
			print_unsignedIntToHex(str[i], 'A');
		}
		else
			_putchar(str[i]);
	}
	return (i);
}

/**
 * print_str - lower case
 * @arg: the arg
 * Return: charector
 */

int print_str(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_unsigned - unsigned
 * @arg: argument
 * Return: success 0.
 */

int print_unsigned(va_list arg)
{
	int divisor = 1, i, resp;
	unsigned int n = va_arg(arg, unsigned int);

	for (i = 0; n / divisor > 9; i++, divisor += 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
	return (i + 1);
}
