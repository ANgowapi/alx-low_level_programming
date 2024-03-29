#include "main.h"

/**
* _strstr - locates a substring.
* @haystack: the longer string to search.
* @needle: the first occurrence of the substring.
*
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;

while (haystack[a])
{
while (needle[b])
{
if (haystack[a + b] != needle[b])
{
break;
}
b++;
}
if (needle[b] == '\0')
{
return (haystack + a);
}
a++;
}
return ('\0');
}

