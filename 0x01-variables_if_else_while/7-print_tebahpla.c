#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * Return: 0 Success
*/
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
