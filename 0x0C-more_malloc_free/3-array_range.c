#include "main.h"

/**
* array_range - creates an array of integers containing a range of values
* @min: the lower bound (included)
* @max: the upper bound (included)
*
* Return: If memory allocation fails or max is less than max, return NULL.
* Otherwise, return the newly created array.
*/
int *array_range(int min, int max)
{
int *ptr;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;

ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
ptr[i] = min++;

return (ptr);
}
