#include"holberton.h"
/**
 * print_diagonal - prints n length line
 * @n: length of diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
for (b = 1; b <= a - 1; b++)
{
_putchar (32);
}
_putchar (92);
_putchar ('\n');
}
}
else
_putchar ('\n');
}
