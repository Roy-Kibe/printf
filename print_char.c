#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * @l: va_list argument containing char
 * Return: number of characters it prints
 */

int print_char(va_list l)
{
	int chars_printed = 0;
	char c = (char) va_arg(l, int);

	putchar(c);
	chars_printed++;

	return (chars_printed);
}
