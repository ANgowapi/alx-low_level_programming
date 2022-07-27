#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int a, b, c;

a = 1;
b = 2;
c = 3;

if (argc != c)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[a]) * atoi(argv[b]));
return (0);
}
