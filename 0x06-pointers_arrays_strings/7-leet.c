#include "holberton.h"

/**
 *leet - String to Uppercase
 *@p: pointer the string we want to capitalize
 *Return: string
 */
char *leet(char *p)
{
	int i, k;
	char *A = "aeotlAEOTL", *B = "4307143071";

	for (i = 0; p[i]; i++)
	{
		for (k = 0; A[k]; k++)
		{
			if (p[i] == A[k])
				p[i] = B[k];
		}
	}
	return (p);
}
