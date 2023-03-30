#include "main.h"

/**
 * leet - encodes a string into leet.
 * @str: string
 * Return: ptr
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char  lt[] = "aeotl";
	char LT[] = "AEOTL";
	char num[] = "43071";

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
		if (str[i] == lt[j] || str[i] == LT[j])
			str[i] = num[j];
		}
	i++;
	}
	return (str);
}
