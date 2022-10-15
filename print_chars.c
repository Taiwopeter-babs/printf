#include "main.h"

/**
 * print_c - prints character
 * @ch: data type that holds the info
 *
 * Return: number of characters printed
 */
int print_c(va_list ch)
{
	char c = va_arg(ch, int);

	_putchar(c);
	return (1);
}
/**
 * print_str - prints string
 * @str: data type that holds the info
 * Return: number of characters printed
 */
int print_str(va_list str)
{
	int count;
	char *s;

	s = va_arg(str, char*);
	if (s == NULL)
		s = "(null)";
	for (count = 0; s[count] != '\0'; count++)
		_putchar(s[count]);
	return (count);
}
/**
 * print_percent - prints percentage symbol
 * @percent: unused
 * Return: number of characters printed
 */
int print_percent(__attribute__((unused)) va_list percent)
{
	_putchar('%');

	return (1);
}
