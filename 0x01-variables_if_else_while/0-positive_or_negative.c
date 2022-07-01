#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main: Determine whether number is positive or negative
*
*Description: everytime the program is run, 
*variable n will store a different number.
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else (n < 0)
printf("%d is negative\n", n) 
return (0);
}
