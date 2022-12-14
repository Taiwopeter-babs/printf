#include "main.h"
/**
 * format_specifier - performs the function choice and sets the format
 * appropriately
 * @format: format string that that takes in all chars and specifiers
 * @f_list: has type format_spec; array of struct members
 * i.e specifiers and functions
 * @args_list: has type va_list; holds the info about format and va_start
 * Return: amount of characters printed
 */
int format_specifier(const char *format, f_spec f_list[], va_list args_list)
{
	int i, j, count, r_value;

	r_value = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].spec != NULL; j++)
			{
				if (f_list[j].spec[0] == format[i + 1])
				{
					count = f_list[j].func(args_list);
					r_value += count;
					if (r_value == -1)
						return (-1);
					break;
				}

			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			r_value++;
		}
	}

	return (r_value);


}
