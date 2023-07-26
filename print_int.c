#include "main.h"

/**
 * print_int - prints integers
 * @args: arguments
 *
 * Return: int
 */

int print_int(va_list args)
{
	int n, number, count = 0, digits = 1;

	n = va_arg(args, int);

	if (n == INT_MIN)
	{
		count += _putchar('-');
		number = -(n + 1);
		number = -(number + 1);
	}

	else if (n < 0)
	{
		count += _putchar('-');
		number = -n;
	}
	else
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
