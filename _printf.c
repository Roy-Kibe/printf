#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
    int i, chars_printed = 0;

    va_list args;
    va_start(args, format);

    for ( i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%') 
        {
            /**If it comes across a %, look at the next character*/
            i++;

            switch (format[i]) {
                case 's': {
                    chars_printed+= print_string(args);
                    
                    break;
                }
                case 'c': {
                    chars_printed+=print_char(args);
                    break;
                }
                case '%': {
                    putchar('%');
                    chars_printed++;
                    break;
                }
                default: {
                    /**If none in case, print it as is*/
                    putchar('%');
                    chars_printed++;
                    putchar(format[i]);
                    chars_printed++;
                    break;
                    }
            }
        } else {
            /*Normal characters*/
            putchar(format[i]);
            chars_printed++;
        }
    }


    return (chars_printed);
}