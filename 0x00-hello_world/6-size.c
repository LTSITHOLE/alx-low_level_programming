#include <stdio.h>
/**
 * main - a program that prints using puts
 * Return: 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of an char : %lu byte(s)\n", sizeof(a));
printf("Size of an int : %lu byte(s)\n", sizeof(b));
printf("Size of an long int : %lu byte(s))\n", sizeof(c));
printf("Size of an long long int : %lu byte(s)\n", sizeof(d));
printf("Size of an float : %lu byte(s)\n", sizeof(f));
return (0);
}
