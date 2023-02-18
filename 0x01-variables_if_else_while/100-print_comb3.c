#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * Return: 0 Success
*/
int main(void)
{
int x;
for (x = 0; x < 90; x++)
{
if (x == 10 || x == 11 || x == 20 || x == 21 || x == 22 || x == 30 ||  x == 31 || x == 32 || x == 33 || x == 40 || x == 41 || x == 42 || x == 43|| x == 44 || x == 50 || x == 51 || x == 52 || x == 53 || x == 54 || x == 55 || x == 60 || x == 61 || x == 62 || x == 63 || x == 64 || x == 65 || x == 66 || x == 70 || x == 71 || x == 72 || x == 73 || x == 74 || x == 75 || x == 76 || x == 77 || x == 80 || x == 81 || x == 82 || x == 83 || x == 84 || x == 85 || x == 86 || x == 87 || x == 88 )
continue;
else
{
putchar(x);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
