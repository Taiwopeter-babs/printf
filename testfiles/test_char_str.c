#include "../main.h"
#include <stdio.h>

int main(void)
{
	int len;
	char a;
	char *b;
	int n = 778878787;
	int y = -448785456;
	int z = n + y;

	a = 'T';
	b = "Hello world....";

	len = _printf(":[%c], [%s]\n[%d]\n[%i]\nz: [%d]\n", a, b, n, y, z);
	_printf("%d\n", len);
	return (0);
}
