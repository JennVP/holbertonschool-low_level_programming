#include "holberton.h"
/**
 *cap_string - capitalizes all words of a string
 *@s: string
 *
 *Return: char
 */
char *cap_string(char *s)
{
	int k = 0, i;
	char *cond = "\t \n,;.!=\"(){}";
	int len_cond = sizeof(cond);

	while (s[k])
	{
		for (i = 0; i < len_cond; i++)
			if ((k == 0) || (s[k - 1] == cond[i]))
				if ('a' <= s[k] && s[k] <= 'z')
				{
					s[k] = s[k] - 'a' + 'A';
					break;
				}
		k++;
	}

	return (s);
}
