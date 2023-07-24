#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct functions - Struct functions
 *
 * @fn: The specifier pointer
 * @f: The function associated
 *
 */

struct functions
{
	char *fn;
	int(*f)(va_list);
};

typedef struct functions functions_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_uint(va_list args);
int print_octal(va_list args);
int print_hexlower(va_list args);
int print_hexupper(va_list args);
int fn_parser(const char *format, functions_t fn_list[], va_list args);

#endif
