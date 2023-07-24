#include "main.h"

/**
 * fn_parser - returns number of characters printed
 * @format: character string
 * @fn_list: function list
 * @args: arguments
 *
 * Return: int
 */

int fn_parser(const char *format, functions_t fn_list[], va_list args)
{
	int i, j, r_value, count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; fn_list[j].fn != NULL; j++)
			{
				if (format[i + 1] == fn_list[j].fn[0])
				{
					r_value = fn_list[j].f(args);
					if (r_value == -1)
						return (-1);
					count += r_value;
					break;
				}
			}
			if (fn_list[j].fn == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
