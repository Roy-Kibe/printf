#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */

int _printf(const char *format, ...)
{
	int i, chars_printed = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
	++i;
	chars_printed += handle_format_specifier(format, &i, args);
	}
	else
	{
	/*Normal characters*/
	putchar(format[i]);
	chars_printed++;
	}
	}

	return (chars_printed);
}
