#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create an array of intergers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
