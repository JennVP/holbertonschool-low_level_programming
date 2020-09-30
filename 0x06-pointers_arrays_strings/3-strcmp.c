#include "holberton.h"

/**
 *_strcmp - compare two strings
 *@s1: pointer for the first string we want to compare
 *@s2: pointer for the second string we want to compare
 *
 *Return: and integer
 */
int _strcmp(char *s1, char *s2)
{
	int dif = 0;

	while (dif == 0 && *s1 && *s2)
	{
		dif = (*s1++) - (*s2++);
	}
	return (dif);
}
