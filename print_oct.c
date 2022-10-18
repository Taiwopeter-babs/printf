#include "main.h"
/**
 * print_oct - converts given number to octal format.
 * @num: the given number to be converted.
 *
 * Return: the number of characters printed
 */
int print_oct(va_list num)
{
	unsigned int n;
	int i, count;
	char buffer[100];
	char *rev_str;

	n = va_arg(num, unsigned int);
	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);
	i = 0;
	while (n > 0)
	{
		buffer[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}

	rev_str = rev_string(buffer);

	for (count = 0; rev_str[count] != '\0'; count++)
		_putchar(rev_str[count]);
	return (count);
}
