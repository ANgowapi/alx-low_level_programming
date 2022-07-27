#include "main.h"

/**
* main - print the program name and arguments.
* @argc: size of the argument vector.
* @argv: program name and arguments.
*
* Return: 0
*/
int main(int argc, char *argv[])
{
int i;

i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
