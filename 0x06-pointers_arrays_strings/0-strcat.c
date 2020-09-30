#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer for the first string we want to change
 * @src: pointer for the second string
 * Return: The new string
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i]) /*increase and stop if find a 0*/
i++;
while (src[j])
dest[i++] = src[j++];
dest[i] = '\0';
return (dest);
}
