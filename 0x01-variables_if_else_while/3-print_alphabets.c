#include <stdio.h>

/**
* main - print the letters of the alphabet
*
* Description: print the letters of the alphabet in lower then in uppercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
int a, p;

a = 97;
p = 65;

while (a < 123)
{
putchar(a);
a++;
}
while (p < 91)
{
putchar(p);
p++;
}
putchar(10);
return (0);
}
