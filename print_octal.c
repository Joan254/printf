#include "main.h"

/**
 * print_octal - prints an octal number
 * @args: arguments
 *
 * Return: int
 */

int print_octal(va_list args)
{
int count = 0, octal[32];

unsigned int number = va_arg(args, unsigned int);

int i = 0, j, e_nonzerobit = 0

while (i < 32)
{
	octal[i] = number & 7;
	number >>= 3;
	i++
}

for (j = 31; j >= 0; j--)

{
if (octal[j] || e_nonzerobit)
	{
	e_nonzerobit = 1;
	_putchar(octal[j] + '0');
	count++;
	}
}
if (count == 0)
{
	_putchar('0');
	count++;
}
return (count);
}
