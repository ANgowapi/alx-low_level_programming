#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0.
*
* Return: void
*/
void times_table(void)
{
int a, b, product;

for (a = 0; a <= 9; a++)
{
_putchar('0');

for (b = 1; b <= 9; b++)
{
_putchar(',');
_putchar(' ');

product = a * b;

if (product <= 9)
_putchar(' ');
else
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
_putchar('\n');
}
}
