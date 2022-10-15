#include "main.h"
#include <stdio.h>

int main(void)
{
	char a;
	char *b;

	a = 'T';
	b = "world";

	_printf(":[%c], [%s]\n", a, b);
	return (0);
}
