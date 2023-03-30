#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: arr
 * @n: num
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;
	int r = n;

	for (i = 0; i < n / 2; i++)
	{
		r--;
		tmp = a[r];
		a[r] = a[i];
		a[i] = tmp;
	}
}
