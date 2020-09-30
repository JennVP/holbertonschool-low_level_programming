#include "holberton.h"

/**
 *_strncat - concatenates two strings
 *@dest: pointer for the first string we want to change
 *@src: pointer  for the second string
 *@n: number of bytes
 *
 *Return: the new string with n bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j])
		dest[i++] = src[j++];
	return (dest);
}
