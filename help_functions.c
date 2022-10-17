#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @str: string to be reversed
 * Return: nothing
 */
void rev_string(char *str)
{
	unsigned int i;
	char *f_char, *l_char;
	char tmp;
	unsigned int len;

	for (i = 0; str[len] != '\0'; len++)
		;
	/* set the pointers to the first character of the string */
	f_char = str;
	l_char = str;
	/* move l_char pointer to the end of the string */
	for (i = 0; i < len - 1; i++)
		l_char++;

	for (i = 0; i < len / 2; i++)
	{
		tmp = *l_char;
		*l_char = *f_char;
		*f_char = tmp;

		l_char--;
		f_char++;
	}


}
