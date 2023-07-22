#include "main.h"
#include <string.h>

int _printf(const char *format, ...)
{
	va_list args;

	int i, str, count = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
				count++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char*);
				str = print_s(s);
				count += _strlen(s);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				count ++;
			}
			else if (format[i] == 'i' || format[i] == 'd')
			{
				print_int(va_arg(args, int));
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
