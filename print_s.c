#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be used
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *s != '\0'; s++)
	{
		l++;
	}

	return (l);
}

/**
 * print_s - prints a string
 * @str: string to be used
 *
 * Return: void
 */

int print_s(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count += 1;
	}
	return (count);
}
