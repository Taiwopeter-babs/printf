#include "../main.h"
#include <stdio.h>
#include <limits.h>


int main(void)
{
	int a;
	int b;
	unsigned int ui;
	unsigned int c;

	a = 345;
	b = 5;
	ui = 567;
	c = 98;

	_printf("integer:[%d], [%i]\n", a, b);
	_printf("Binary: [%b]\n", c);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	return (0);
}
