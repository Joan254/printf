#include "main.h"

/**
 * print_uint - prints unsigned integers
 * @args: arguments
 *
 * Return: int
 */

int print_uint(va_list args)
{
int count = 0, digits = 1;

unsigned int number;

unsigned int n = va_arg(args, unsigned int);

number = n;

while (number / digits > 9)
	{
	digits *= 10;
	}
while (digits != 0)
	{
	count += _putchar('0' + number / digits);
	number %= digits;
	digits /= 10;
	}
return (count);
}
