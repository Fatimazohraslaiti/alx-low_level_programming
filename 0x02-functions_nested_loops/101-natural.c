#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int result = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 5) == 0 || (n % 3) == 0)
		{
		result += n;
		}
	}
	printf("%d\n", result);
	return (0);
}
