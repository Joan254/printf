#include "main.h"

/**
 * print_char - prints a character
 * @args: arguments*
 *
 * Return:int
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);

	_putchar(c);
	return (1);
}
