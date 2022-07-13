#include "main.h"
/**
* rev_string - reverses a string.
* @s: String to reverse
* Return: nothing.
*/

void rev_string(char *s)
{
int i = 0;
int reverse = 0;
char ltemp;
while (*(s + i) != '\0')
i += 1;
i -= 1;
while (reverse < i)
{
ltemp = s[i];
s[i] = s[reverse];
s[reverse] = ltemp;
reverse++;
i--;
}
}
