#include "main.h"

/**
 * print_int - prints integers
 * @args: arguments
 *
 * Return: int
 */

int print_int(va_list args)
{
	int n, count = 0, digits = 1;

	unsigned int number;

	n = va_arg(args, int);

	if (n < 0)
	{
		count += _putchar('-');
		number = n * -1;
	}
	else
		number = n;

	if (n == INT_MIN)
	{
		n = 147483648;
		count++;
	}

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
