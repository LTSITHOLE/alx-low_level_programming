#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * Return: 0 Success
*/
int main(void)
{
int nm;
for (nm = 48; nm <= 58; nm++)
{
putchar(nm);
if (nm != 57)
{
putchar(',');
putchar('$');
}
}
putchar('\');
putchar('\n');
return (0);
}
