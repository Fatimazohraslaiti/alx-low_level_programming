#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 2 && j == 4)
			{
				return;
			}
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(':');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar('\n');
				}
			}
		}
	}
}
