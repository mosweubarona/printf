#include "main.h"
#include <stdio.h>

/**
 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 */

int _printf(const char *format, ...)
{
	buffer_t *output;
	va_list args;
		return (-1);
	output = init_buffer();
	if (output == NULL)
		return (-1);
	ret = run_printf(format, args, output);

	return (ret);
}
