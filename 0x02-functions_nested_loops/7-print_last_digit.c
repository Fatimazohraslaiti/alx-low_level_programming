#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@c: the number
 * Return: Always 0.
 */

int print_last_digit(int c)
{
	int j = c % 10;

	if (j < 0)
	{
		j = -j;
	}
	_putchar(j + 48);
	return (j);
}
