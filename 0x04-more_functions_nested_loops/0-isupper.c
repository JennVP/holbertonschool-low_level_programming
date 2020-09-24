#include "holberton.h"

/**
 * _isupper - Checks if input character is uppercase
 * @c: letter to be checked
 *
 * Return: 1 for upercase, 0 for non-upercase
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
