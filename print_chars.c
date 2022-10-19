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
/**
 * rot13 - encrypts the string in rot13
 * @str: data type that holds the info
 * Return: number of characters printed
 */
int rot13(va_list str)
{
	char *s;
	int i, idx;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(str, char*);
	if (s == NULL)
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (idx = 0; idx < 52; idx++)
		{
			if (s[i] == alpha[idx])
			{
				_putchar(rot[idx]);
				break;
			}
		}

	}
	return (i);

}
/**
 * print_rev - calls rev_string function to reverse a string
 * @str: data type holding the info
 * Return: Number of characters printed
 */
int print_rev(va_list str)
{
	char *ptr;
	char *s;
	int count;

	s = va_arg(str, char*);
	if (s == NULL)
		return (-1);

	ptr = rev_string(s);
	if (ptr == NULL)
		return (-1);

	for (count = 0; ptr[count] != '\0'; count++)
	{
		_putchar(ptr[count]);
	}
	free(ptr);

	return (count);

}
