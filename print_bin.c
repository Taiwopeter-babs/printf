#include "main.h"
/**
 * print_bin - converts given number to binary format.
 * @num: the given number to be converted.
 *
 * Return: the number of characters
 */
int print_bin(va_list num)
{
	unsigned int i, n;
	char buffer[1024];
	char *rev_str;
	int count;

	n = va_arg(num, unsigned int);
	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);

	for (i = 0; n > 0; i++)
	{
		buffer[i] = (n % 2) + '0';
		n /= 2;
	}

	rev_str = rev_string(buffer);
	rev_str[i] = '\0';


	for (count = 0; rev_str[count] != '\0'; count++)
		_putchar(rev_str[count]);

	return (count);
}
