#include "main.h"
/**
* _islower - writes character to stdout in the program
* @c: this is the character to print from input
* Return: 1 if c is lowercase otherwise 0 according to input
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
