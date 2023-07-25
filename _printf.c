#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed (excluding the
 * null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int count;

	functions_t fn_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_int},
		{"b", print_binary},
		{"u", print_uint},
		{"o", print_octal},
		{"x", print_hexlower},
		{"X", print_hexupper},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	count = fn_parser(format, fn_list, args);

	va_end(args);

	return (count);
}
