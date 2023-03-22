#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *@d: the integer
 * Return: Always 0.
 */
int _abs(int d)
{
	if (d < 0)
		return (-d);
	if (d > 0)
		return (d);
	else
		return (0);
}
