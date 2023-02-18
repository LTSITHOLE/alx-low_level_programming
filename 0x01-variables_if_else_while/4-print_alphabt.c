#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * Return: 0 Success
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
putchar(ch);
}
putchar('\n');
return (0);
}
