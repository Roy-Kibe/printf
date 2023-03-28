#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_int - Prints a integer to the screen
 * @l: va_list containing string to print
 * Return: number of char printed
 */

int print_int(va_list l)
{
int j, chars_printed = 0,len = 0;
int num = va_arg(l, int);
char buffer[32];
snprintf(buffer, 32, "%d", num);

while (buffer[len] != '\0') len++;

for ( j = 0; buffer[j] != '\0'; j++)
{
	putchar(buffer[j]);
	chars_printed++;
}

return (chars_printed);
}

