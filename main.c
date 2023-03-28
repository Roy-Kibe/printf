#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len, _len;

	_printf("This contains two strings, %s, %s\n", "Hello", "World");
	printf("This contains two strings, %s, %s\n", "Hello", "World");

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	_len = _printf("Character:[%c, %c, %c]\n", 'H', 'c', '@');
	len = printf("Character:[%c, %c, %c]\n", 'H', 'c', '@');
	printf("%% wtf\n");
	printf("%% wtf\n");

	printf("len mine: %d\nlen C: %d\n", _len, len);
	return (0);
}
