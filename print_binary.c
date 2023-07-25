#include "main.h"

/**
 * print_binary - prints binary
 * @args: arguments
 *
 * Return: int
 */

int print_binary(va_list args)
{
unsigned int count = 0, binary[32];

unsigned int number = va_arg(args, unsigned int);

int i = 0, j, e_nonzerobit = 0;

while (i < 32)
{
	   binary[i] = number & 1;
	   number >>= 1;
	   i++;
}
for (j = 31; j >= 0; j--)


{
	if (binary[j] || e_nonzerobit)
	{
	e_nonzerobit = 1;
	_putchar(binary[j] + '0');
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
