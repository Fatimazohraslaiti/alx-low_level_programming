#include "main.h"

/**
 * print_rev - prints a string in revesre
 * @s:pts or string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int lng = 0;

	while (s[i])
	{
		lng++;
		i++;
	}

	while (s[lng - 1])
	{
		_putchar(s[lng - 1]);
		lng--;

	}
	_putchar('\n');
}
