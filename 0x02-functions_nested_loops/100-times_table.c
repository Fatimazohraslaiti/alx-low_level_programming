#include "main.h"

/**
 * print_times_table - prints the n times table,
 *@n: num
 * Return: Always 0.
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		int i, j, k;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					if (j == 0)
					{
						_putchar(k + '0');
					}
					else
					{
						_putchar(','), _putchar(' ');
						_putchar(' '), _putchar(' '), _putchar(k + '0');
					}
				}
				else if (k >= 10 && k <= 99)
				{
					_putchar(','), _putchar(' ');
					_putchar(' '), _putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(','), _putchar(' '), _putchar(k / 100 + '0');
					_putchar((k % 100) / 10 + '0'), _putchar((k % 100) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
