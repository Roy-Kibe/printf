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
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	_printf("len mine: %d\n", _len);
	printf("len C: %d\n", len);

	_printf("%b\n", 98);
	return (0);
}
