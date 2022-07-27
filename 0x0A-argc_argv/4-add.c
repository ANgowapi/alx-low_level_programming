#include "main.h"

/**
* isdigits - check if a string is a number
* @s: a pointer to the string to check
*
* Return: 1 if the string is a number,
* otherwise 0
*/
int isdigits(char *s)
{
while ('0' <= *s && *s <= '9')
++s;
return (!*s);
}

/**
* main - adds positive numbers
* @argc: argument counter
* @argv: array of pointer to strings
*
* Return: 0 if no errors, else
*/
int main(int argc, char *argv[])
{
int a, b, sum = 0;

if (argc < 1)
printf("0\n");

for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b]; b++)
{
if (!isdigit(argv[a][b]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[a]);
}
printf("%d\n", sum);
return (0);
}
