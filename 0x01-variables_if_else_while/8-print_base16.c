#include <stdio.h>

/**
* main - Prints all the numbers of base 16 in lowercase.
*
* Return: Always 0.
*/
int main(void)
{
int num;
char alph;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (alph = 'a'; alph <= 'p'; alph++)
putchar(alph);
putchar('\n')
return (0);
}
