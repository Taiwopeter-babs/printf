#include "main.h"

/**
 * print_int - This takes in the integer as argument and prints out
 * the appropriate format
 * @num: integer to be taken as argument
 *
 * Return: total number of characters printed to stdout
 */

int print_int(va_list num)
{
	int n;
	int divisor;
	int count;
	unsigned int number;

	n = va_arg(num, int);
	divisor = 1;
	count = 0;

	if (n < 0)
	{
		_putchar('-');
		number = -n;
		count++; /* increase count for negative sign */
	}
	else
	{
		number = n;
	}

	while ((number / divisor) >= 10)
	{
		divisor = divisor * 10;
	}

	while (divisor != 0)
	{
		_putchar(number / divisor + '0');
		count++;
		number = number % divisor;
		divisor = divisor / 10;
	}

	return (count);
}

