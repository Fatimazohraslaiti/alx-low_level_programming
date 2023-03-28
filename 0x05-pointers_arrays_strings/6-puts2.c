#include "main.h"

/**
 * puts2 - reverses a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int lng;
	int k;

	lng = 0;
	while (str[i])
	{
		lng++;
		i++;
	}
	for (k = 0; k < lng; k++)
	{
	if (k % 2 == 0)
	{
		_putchar(str[k]);
	}
	}
	_putchar('\n');
}
