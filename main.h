#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
* struct print - structure for printing various types
* @t: type to printt
* @f: function to print
*/

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print;

#endif /* MAIN_H */
