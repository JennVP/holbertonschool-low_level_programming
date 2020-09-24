#include"holberton.h"
/**
 * print_line - prints n length line
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
 _putchar('\n');
}
