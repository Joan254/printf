#include "main.h"

/**
 * print_int - prints an integer
 * @num: number to be printed
 * 
 * Return: the integers to be printed
 */

int print_int(int num)
{
	int n, count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	
	if (num == 0)
	{
		_putchar('0');
	}

	if (num / 10)
		print_int(num / 10);

	_putchar(num % 10 + '0');
	count++;

	return (count);
}
