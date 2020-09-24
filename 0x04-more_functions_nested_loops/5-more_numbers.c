#include "holberton.h"

/**
 * more_numbers - prints digits 0 - 14, 10x
 *
 * Return: void
 */
void more_numbers(void)
{
char i, c;
i = 0;
while (i <= 10)
{
c = 0;
while (c <= 14)
{
if (c > 9)
{
_putchar(c / 10 + '0');
}
_putchar(c % 10 + '0');
c++;
}
_putchar('\n');
i++;
}
}

