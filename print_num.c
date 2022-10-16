#include "main.h"
int print_int(va_list number)
{
	unsigned int num;
	int n, divisor, count = 0;

	n = va_arg(number, int);

	divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
		num  = n;

	while (num / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		_putchar(num / divisor + '0'); /* print leading digit */
		num %= divisor; /* remove first digit */
		divisor /= 10; /* set divisor to same unit as number */
		count++;
	}
	return count;
}
