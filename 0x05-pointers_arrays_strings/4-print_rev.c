#include"holberton.h"
/**
 * print_rev - prints string, from pointer to string, in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;
int x;

while (s[i] != '\0')
i++;
for (x = i; x >= 0; x--)
_putchar(s[x]);
_putchar('\n');
}
