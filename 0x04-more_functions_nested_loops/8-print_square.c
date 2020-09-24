#include"holberton.h"
/**
 * print_square - prints size x size square
 * @size: dimensions of square
 *
 * Return: void
 */
void print_square(int size)
{
int a, b;
if (size < 1)
_putchar('\n');
/*print lines down*/
for (b = size; b > 0; b--)
{
/*print number of #*/
for (a = size; a > 0; a--)
{
_putchar(35);
}
_putchar('\n');
}
}
