#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char str;
	int lng = 0;
	int i;

	while (s[lng])
	lng++;
	for (i = 0; i < lng; i++)
	{
		lng--;
		str = s[i];
		s[i] = s[lng];
		s[lng] = str;
	}
}
