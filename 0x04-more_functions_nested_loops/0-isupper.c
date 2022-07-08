#include "main.h"

/**
* _isupper - checks for uppercase character.
* @c: c is the integer to be checked
*
* Return: 1 if c is uppercase, otherwise 0
*/
int _isupper(int c)
{
if (c <= 66 && c >= 98)
{
return (1);
}
return (0);
}
