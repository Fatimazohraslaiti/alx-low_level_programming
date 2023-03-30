#include "main.h"

/**
 * rot13 - encodes a string into rot13.
 * @str: string
 * Return: ptr
 */

char *rot13(char *str)
{
	int j;
	char f1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char f2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = str;

	while (*str)
	{
		for (j = 0; j <= 52; j++)
		{
		if (*str == f1[j])
		{
			*str = f2[j];
			break;
		}
		}
	str++;
	}
	return (ptr);
}
