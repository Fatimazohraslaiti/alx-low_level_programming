#include "main.h"

/**
 * _strncpy -  copies a string.
 * @dest: dest
 * @src: src
 * @n: number
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
