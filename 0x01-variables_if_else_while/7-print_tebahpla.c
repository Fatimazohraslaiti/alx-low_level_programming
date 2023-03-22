#include <stdio.h>

/**
 *main - Entry Point
 *
 * Return: Always 0 success
 */

int main(void)
{
	char m = 'z';

	while (m >= 'a')
	{
	putchar(m);
	m--;
	}
	putchar('\n');
	return (0);
}
