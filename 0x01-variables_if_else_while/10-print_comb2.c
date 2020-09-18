#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
int c;
c = 0;
while (c < 100)
{
/*remove the last digit and recur*/
putchar((c / 10) + '0');
/*print last digit*/
putchar((c % 10) + '0');
if (c <= 99)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
