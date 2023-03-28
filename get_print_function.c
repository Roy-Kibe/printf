#include "main.h"
#include <stdio.h>

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int handle_format_specifier(const char* format, int* i, va_list args)
{
    switch (format[*i]) {
        case 's': return print_string(args);
        case 'c': return print_char(args);
        case '%': putchar(format[*i]); return 1;
        default:  putchar('%'); putchar(format[*i]); return 2;
    }
}