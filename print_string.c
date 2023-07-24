#include "main.h"

/**
 * print_string - prints a string
 * @args: arguments
 *
 * Return: int
 */

int print_string(va_list args)
{
	const char *str;

	int i = 0;

	str = va_arg(args, const char *);
	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
