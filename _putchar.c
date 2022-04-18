#include <unistd.h>

/**
 * _putchar - writes a charactor to c
 * @c: charector to write to stdou
 * Return: on success 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
