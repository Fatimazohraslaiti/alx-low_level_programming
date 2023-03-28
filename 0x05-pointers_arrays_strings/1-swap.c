#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers
 *@a: first
 *@b: second
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
