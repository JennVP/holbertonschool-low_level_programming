#include"holberton.h"
#include<string.h>
/**
 * puts_half - prints half the string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0, half = 0;
while (*(str + len))
len++;
if (len % 2 == 0)
half = len / 2;
else
half = (len + 1) / 2;
while (*(str + half))
_putchar(*(str + half++));
_putchar('\n');
}
