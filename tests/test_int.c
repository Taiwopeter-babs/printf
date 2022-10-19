#include "../main.h"
#include <stdio.h>


int main(void)
{
	int a;
	int b;
	unsigned int ui;

	a = 345;
	b = 5;
	ui = (unsigned int)INT_MAX + 1024;

	_printf(":[%d], [%i]\n", a, b);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	return (0);
}
