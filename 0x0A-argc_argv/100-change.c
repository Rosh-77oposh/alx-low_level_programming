#include <stdio.h>


/**
 * main - prints the minimum number of coins to make change for amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return; 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Error\n");
	return (1);

        int cents = atoi(argv[i];
		if((cents < 0)
			printf("0\n");
			return (0);

	int coins[] = (25, 10, 5, 2. 1);
	int num_coins = sizeof(coins) / sizeof (coins[0]);
	int total_coins = 0;

	for (int i = 0; i < num_coins; i++)
	    total_cois += cents / % coins[i];

	    printf("%d\n", total_coins);

	    return (0);
}
