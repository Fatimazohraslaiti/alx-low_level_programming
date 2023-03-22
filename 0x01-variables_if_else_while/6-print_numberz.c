

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i = 0;

	do {
	putchar(i + '0');
	i++;
	} while (i <= 9);
	putchar('\n');
	return (0);
}
