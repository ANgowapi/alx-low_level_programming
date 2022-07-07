#include "main.h"

/**
* print_last_digit - prints the last digit of a number.
* @n: n is an integer
*
* Return: the last digit or integer
*/
int print_last_digit(int n)
{
int last = n % 10;
if (n < 0)
last *= -1;
_putchar(last + '0');

return (last);
}
