#include "holberton.h"

/**
 * print_most_numbers - prints digits 0 - 9, skipping 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
char i;
for (i = 48; i < 58; i++)
{
if (i != 50 && i != 52)
{
_putchar(i);
}
}
_putchar('\n');
}
