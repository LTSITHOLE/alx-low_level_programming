#include "main.h"
/**
* _islower - writes character to stdout in the program
* @c -the character to print
* Return - 1 c is lowercase otherwise 0
* on error - -1 is returned
*/
int _islower(int c)
{
if ( c >=97 && c <= 122)
return (1);
else
return (0);
}
