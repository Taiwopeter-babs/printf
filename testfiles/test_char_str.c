#include "../main.h"
#include <stdio.h>

int main(void)
{
	int len, len_hex;
	char a;
	char *b;
	int n = 778878787;
	int y = -448785456;
	int z = n + y;

	a = 'T';
	b = "Hello world....";

	len = _printf(":[%c], [%s]\n[%d]\n[%i]\nz: [%d]\n", a, b, n, y, z);
	_printf("%d\n", len);
	_printf("%b\n", 68);
	_printf("binary of 98: [%b]\n", 98);
	len_hex = _printf("hex value of 89255: [%X]\n", 89255);
	_printf("length of hex value printed: %d\n", len_hex);
	_printf("oct value of 89255: [%o]\n", 89255);
	return (0);
}
