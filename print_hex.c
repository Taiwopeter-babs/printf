#include "main.h"
/**
 * print_hex - converts given number to hexadecimal format.
 * @num: the given number to be converted.
 *
 * Return: the number of characters printed
 */
int print_hex(va_list num)
{
	unsigned int n;
	int i, idx, count;
	char buffer[100];
	char *rev_str;
	char hex[] = "0123456789abcdef";

	n = va_arg(num, unsigned int);
	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);
	i = 0;
	while (n > 0)
	{
		idx = n % 16;

		if (n % 16 > 9)
			buffer[i] = hex[idx];
		else
			buffer[i] = (n % 16) + '0';
		n /= 16;

		i++;
	}

	rev_str = rev_string(buffer);

	for (count = 0; rev_str[count] != '\0'; count++)
		_putchar(rev_str[count]);
	return (count);
}
