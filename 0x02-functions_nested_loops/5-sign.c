#include "main.h"
/**
* _islower - writes character to stdout in the program
* @n this is the character to print from input
* Return: 1 if c is lowercase otherwise 0 according to input
*/
int _islower(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n <0 )
{
_putchar(45)
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
