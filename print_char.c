#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int print_char(va_list l)
{
    int chars_printed = 0;
    char c = (char) va_arg(l, int);
    putchar(c);
    chars_printed++;

    return chars_printed;
}