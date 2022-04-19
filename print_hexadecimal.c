#include "main.h"

/**
 * print_hex_base - base
 * @arg: argument
 * @_case: caps and lower
 * Return: number of digit
 */

int print_hex_base(va_list arg, char _case)
{
	unsigned int num = va_arg(arg, unsigned int);
	int nbrCharacters;

	if (num == 0)
		return (_putchar('0'));
	nbrCharacters = print_unsignedIntToHex(num, _case);

	return (nbrCharacters);
}

/**
 * print_hex - headecimal
 * @arg: argument
 * Return: digits
 */

int print_hex(va_list arg)
{
	return (print_hex_base(arg, 'a'));
}

/**
 * print_HEX - hexa in caps
 * @arg: argument
 * Return: number of digits
 */

int print_HEX(va_list arg)
{
	return (print_hex_base(arg, 'A'));
}
