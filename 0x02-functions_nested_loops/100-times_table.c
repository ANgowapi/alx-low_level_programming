#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0.
* @n: n is the value of times table to be printed
*
* Return: void
*/

void print_times_table(int n)
{
int a, b, product;

if (n >= 0 && n < 15)
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
product = a * b;
if (b == 0)
_putchar('0');
if (product < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(product % 10 + '0');
}
else if (product >= 10 && product < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((product / 10) % 10 + '0');
_putchar(product % 10 + '0');
}
else if (product > 99 && product < 1000)
{
_putchar(',');
_putchar(' ');
_putchar(product / 100 + '0');
_putchar((product / 10) % 10 + '0');
_putchar(product % 10 + '0');
}
}
_putchar('\n');
}
}
}
