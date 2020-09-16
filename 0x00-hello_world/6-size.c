#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;


printf("Size of a char: %ld bytes\n", sizeof(charType));
printf("Size of an int: %ld bytes\n", sizeof(intType));
printf("Size of a long int: %ld bytes\n", sizeof(longintType));
printf("Size of a long long int: %ld byte\n", sizeof(longlongintType));
printf("Size of a float: %ld bytes\n", sizeof(floatType));
return (0);

}
