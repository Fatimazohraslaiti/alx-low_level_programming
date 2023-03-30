#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: dst
 * @src: src
 * @n: how much char to append
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pt = dest;
	int i = 0;

	while (*pt != '\0')
	{
		pt++;
	}
	while (*src != '\0' && i < n)
	{
		*pt++ = *src++;
		i++;
	}
	*pt++ = '\0';
	return (dest);
}
