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
/*remove the last digit and print the first digit from 0 to 99*/
putchar((c / 10) + '0');
/*print last digit until 99*/
putchar((c % 10) + '0');
if (c < 99)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
