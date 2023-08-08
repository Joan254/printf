0x11. C - printf

Printf is the C language function to do formatted printing. Our _printf.c function tries to emulate the C printf function. It produces output according to a format.

•	Prototype: int _printf(const char *format, ...);

•	Returns: the number of characters printed (excluding the null byte used to end output to strings)

•	write output to stdout, the standard output stream

•	format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. 

•	The function handles the following conversion specifiers:

o	c - outputs character

o	s - outputs string of characters

o	% - indicates start of a format specification but when printing percent sign use %%

o	d or i - outputs signed integer

o	b - outputs binary representation of unsigned integer

o	u - outputs unsigned integer

o	o - outputs unsigned octal

o	x - outputs unsigned hexadecimal integer in lowercase

o	X - outputs unsigned hexadecimal integer in uppercase
