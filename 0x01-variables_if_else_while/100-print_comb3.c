#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * Return: 0 Success
*/
int main(void)
{
int x, y;
for (x = '0'; x < '9'; x++)
{
for (y = x + 1; y <= '9'; y++)
{
if (x != y)
{
putchar(x);
putchar(y);
if (x == '8' && y == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
