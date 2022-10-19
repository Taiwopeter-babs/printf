#include "main.h"
#include <stdio.h>
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * rev_string - reverses a string
 * @str: string to be reversed
 * Return: nothing
 */
char *rev_string(char *str)
{
	unsigned int i;
	char *dest_str;
	char tmp;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	dest_str = malloc(sizeof(char) * len + 1);
	if (dest_str == NULL)
		return (NULL);

	_memcpy(dest_str, str, len);

	for (i = 0; i < len; i++, len--)
	{
		tmp = dest_str[len - 1];
		dest_str[len - 1] = dest_str[i];
		dest_str[i] = tmp;
	}
	return (dest_str);
}
/**
 * _memcpy - copies memory with constant byte
 * @dest: pointer to destination memory where content will be copied to
 * @src: pointer to source memory where content will be copied from
 * @n: number of bytes to copy from src
 * Return: to resulting pointer string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
