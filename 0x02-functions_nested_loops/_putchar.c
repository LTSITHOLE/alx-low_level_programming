#include <unistd>
/**
* _putchar - writes character to stdout
* @c -the character to print
* Return - 1 Sucess
* on error - -1 is returned
*/
int _putchar(char c)
{
return (write(1, &c, 1)) 
}
