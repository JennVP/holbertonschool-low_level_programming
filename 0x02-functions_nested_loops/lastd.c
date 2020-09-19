#include"holberton.h"
/**
 * print_last_digit - print last digit of a number
 * @n: number to be checked
 *
 * Return: 0
 */
int print_last_digit(int n)
{
int lastd = n % 10;
if (lastdigit < 0)
{
lastd = 0 - lastd;
}
_putchar(lastd + '0');
return (lastd);
}
