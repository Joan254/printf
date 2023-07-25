#include "main.h"

/**
 * print_hexlower - prints hexadecimal representation of
 * a number using lowercase letters
 * @args: arguments
 *
 * Return: int
 */

int print_hexlower(va_list args)
{
	int i, j, d, num_d = 0;

	char *hex;

	char hex_d[] = "0123456789abcdef";

	unsigned int n = va_arg(args, unsigned int);

	unsigned int number = n;

	while (number != 0)
	{
		number >>= 4;
		num_d++;
	}

	hex = malloc(sizeof(char) * (num_d + 1));

	if (hex == NULL)
		return (-1);

	for (i = num_d - 1; i >= 0; i--)
	{
		d = n & 0xF;
		hex[i] = hex_d[d];
		n >>= 4;
	}

	hex[num_d] = '\0';

	for (j = 0; j < num_d; j++)
	{
		_putchar(hex[j]);
	}

	free(hex);

	return (num_d);
}
