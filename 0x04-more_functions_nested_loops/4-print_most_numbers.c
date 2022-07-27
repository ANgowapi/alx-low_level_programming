#include "main.h"
#include <stdio.h>
/**
* putchar - prints most numbers, but 2 and 4.
*
* Return: void
*/

void print_most_numbers(void)
{
char a;

for (a = '0'; a <= '9'; a++)
{
if (!(a == '2' || a == '4'))
putchar(a);
}
putchar('\n');
}
