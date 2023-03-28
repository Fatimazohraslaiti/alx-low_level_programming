#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s :pts
 * Return: length of a string
 */

int _strlen(char *s)
{
	int lng = 0;
	int i = 0;

	while (s[i])
	{
		lng++;
		i++;
	}
	return (lng);
}
