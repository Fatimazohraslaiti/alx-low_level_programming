#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
	putchar(d + '0');
	if (d != 9)
	{
	putchar(',');
	putchar(' ');
	}
	d++;
	}
	putchar('\n');
	return (0);
}
