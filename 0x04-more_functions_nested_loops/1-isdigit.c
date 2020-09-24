#include "holberton.h"

/**
 * _isdigit - Checks if input character is a digit
 * @c: Character to be checked
 *
 * Return: 1 for a digit, 0 for non-digit
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
