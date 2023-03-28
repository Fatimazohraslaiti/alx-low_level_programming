#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: ptr
 * @src: ptr too
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i])
		i++;

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
