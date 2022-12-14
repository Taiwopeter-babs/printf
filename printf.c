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
	f_spec f_list[] = {
		{"c", print_c},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"x", print_hex},
		{"X", print_HEX},
		{"o", print_oct},
		{"u", print_unsigned},
		{"R", rot13},
		{"r", print_rev},
		{NULL, NULL}
	};
	va_list args_list;

	if (format == NULL)
		return (-1);
	va_start(args_list, format);
	/* function (format_printer) returns the total number printed */
	total_print = format_specifier(format, f_list, args_list);

	va_end(args_list);
	return (total_print);
}

