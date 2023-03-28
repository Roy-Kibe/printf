#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct switchFunctions
{
	char c;
	int (*f)(va_list l);
} sw;

int _printf(const char *format, ...);
int print_string(va_list l);
int print_char(va_list l);
int print_int(va_list l);
int handle_format_specifier(const char* format, int* i, va_list args);

#endif
