#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int print_string(va_list l)
{
    int j, chars_printed = 0, len = 0;
    char *s = va_arg(l, char *);
                    
    while (s[len] != '\0') len++;

    
    for ( j = 0; s[j] != '\0'; j++) {
        putchar(s[j]);
        chars_printed++;
    }

    
    return chars_printed;
}