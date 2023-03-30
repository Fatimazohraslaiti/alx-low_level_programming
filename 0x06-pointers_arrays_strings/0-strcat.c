#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *pt = dest;

	while (*pt != '\0')
	{
		pt++;
	}
	while (*src != '\0')
	{
		*pt++ = *src++;
	}
	*pt++ = '\0';
	return (dest);
}
