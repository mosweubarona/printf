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
* @t: type to print
* @f: function to print
*/

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print;

/*
*int print_c(va_list c);
*int print_s(va_list s);
*int print_S(va_list S);
*int print_rs(va_list rs);
*int print_rot(va_list ro);
*
*int _print_i(va_list vi);
*int _print_b(va_list b);
*
*int _print_u(va_list);
*int _print_o(va_list);
*int _print_x(va_list);
*int _print_X(va_list);
*int _print_p(va_list);
*/

#endif /* MAIN_H */
