#include <stdio.h>

/**
 * main - Print the first 30 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}else
		{
			printf("%ld,\n", j);
		} 
		next = j + k;
	} 
	return (0);
} 
