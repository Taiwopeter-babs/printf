#include "main.h"
/**
 * _printf - This takes in the string as argument and prints out
 * the appropriate format
 * @format: string to be taken as argument
 * Return: total number of characters printed to stdout
 */
int _printf(const char *format, ...)
{
        int total_print;
        f_spec func_list[] = {
                {"d", print_int},
                {"i", print_int},
                {NULL, NULL}
        };
        va_list args_list;

        if (format == NULL)
                return (-1);
	va_start(args_list, format);
        /* function (format_printer) returns the total number printed */
        total_print = format_specifier(format, func_list, args_list);

        va_end(args_list);
        return (total_print);

}

