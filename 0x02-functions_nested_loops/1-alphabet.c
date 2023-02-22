#include "main.h"
/**
* _print_alphabet - writes character to stdout in the program
* @c -the character to print
* Return - 1 Sucess
* on error - -1 is returned
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
