#include "main.h"

/**
* _isalpha - Checks if a character is alphabetic.
* @c: c is an ascii character
*
* Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}

else if (c >= 'A' && c <= 'Z')
{
return (1);
}

else
{
return (0);
}

}

