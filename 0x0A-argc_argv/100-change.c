#include <stdio.h>
#include <stdlib>
#include "main.h"
/**
 * main - prints the minimum number of coins to make change for amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return; 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1}

	if (argc != 2)
	{
		printf("Errno\n");
		return (1);

