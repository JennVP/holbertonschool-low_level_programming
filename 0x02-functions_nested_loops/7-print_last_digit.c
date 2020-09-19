#include"holberton.h"
/**
 * print_last_digit - print last digit of a number
 * @n: number to be checked
 *
 * Return: 0
 */
int print_last_digit(int n)
{
int l = n % 10;
if (l < 0)
{
l = 0 - l;
}
_putchar(l + '0');
return (l);
}
