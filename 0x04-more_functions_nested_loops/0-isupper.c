#include "main.h"
#include <stdlib.h>
/**
* _isupper - checks for uppercase character.
* @c: c is the integer to be checked
*
* Description: a function that checks for uppercase character.
*
* Return: 1 if c is uppercase, otherwise 0
*/

int _isupper(int c)
{
if (c <= 65 && c >= 90)

return (1);

else

return (0);
}
