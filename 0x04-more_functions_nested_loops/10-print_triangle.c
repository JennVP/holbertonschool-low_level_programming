#include"holberton.h"
/**
 * print_triangle - prints n length line
 * @size: length of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int a, b;
if (size < 1)
_putchar('\n');
for (b = size; b > 0; b--)
{
for (a = b; a > 1; a--)
{
_putchar(32);
}
for (a--; a <= size - b; a++)
{
_putchar('#');
}
_putchar('\n');
}
}
