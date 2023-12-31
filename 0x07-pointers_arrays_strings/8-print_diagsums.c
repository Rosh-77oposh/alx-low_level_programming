#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input value
 * @size: input value
 * Return: Always (Success)
 */
void print_diagsums(int *a, int size);
{

	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
