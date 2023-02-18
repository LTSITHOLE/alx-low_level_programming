#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * Return: 0 Success
*/
int main(void)
{
int nm;
for (nm = 0; nm <100; nm++)
{
putchar(nm + '0');
if (nm < 99)
{
putchar(',');
putchar('$');
}
}
putchar('\n');
return (0);
}
