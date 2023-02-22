#include "main.h"
/**
* _isalpha - writes character to stdout in the program
* @c: this is the character to print from input
* Return: 1 if c is lowercase otherwise 0 according to input
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
