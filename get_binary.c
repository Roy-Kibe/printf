#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_every_binary - Prints a binary to the screen
 * print_binary - Prints the binary representation of an unsigned int
 * @num: number
 * Return: number of char printed
 */

int print_every_binary(int num)
{
	if (num > 1)
	{
	print_every_binary(num / 2);
	}
	putchar((num % 2) ? '1' : '0');
	return (1);
}

int print_binary(va_list l)
{
	int chars_printed = 0;
	unsigned int num = va_arg(l, int);

	chars_printed += print_every_binary(num);

	return (chars_printed);
}
