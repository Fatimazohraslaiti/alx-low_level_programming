#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int x = 0;
	char c = 'a';

	while (x <= 9)
	{
	putchar(x + '0');
	x++;
	}

	while (c <= 'f')
	{
	putchar(c);
	c++;
	}

	putchar('\n');
	return (0);
}
