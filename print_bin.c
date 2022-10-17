#include "main.h"

/**
 * print_bin - converts given number to binary format.
 * num: the given number to be converted.
 *
 * Return: the number of characters
 */

int print_bin(va_list num)
{
	unsigned int n = va_arg(num, unsigned int);
	int count = 0;
	char* buffer;
	unsigned int i = 0;

	if (n < 1)
		return (-1);

	if (n == 0)
	{
		return (0);
		count++;
	}

	while (n >= 1)
	{
		count++;
		n = n / 2;
	}

	buffer = malloc(sizeof(char) * count + 1);

	if (buffer == NULL)
		return (-1);

	for (i = 0; n > 0; i++)
	{
		if (n % 2 == 0)
			buffer[i] = '0';
		else
			buffer[i] = '1';
		n /= 2;
	}
	buffer[i] = '\0';

	rev_string(buffer);

	if (buffer == NULL)
		return (-1);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}
	
	free(buffer);

	return (count);
}
