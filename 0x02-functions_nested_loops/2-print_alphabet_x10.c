#include "main.h"
/**
* print_alphabetx10 - writes character to stdout in the program
* @c -the character to print
* Return - 1 Sucess
* on error - -1 is returned
*/
void print_alphabet_x10(void)
{
char c;
int x;
for (x =0; x < 10; x++)
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
