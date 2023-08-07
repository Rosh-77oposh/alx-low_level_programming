#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	if (argc == 1)

	{
		printf("0\n");
		return (0);
	}

	int sum = 0;
	for (int = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
	}

	{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");

		return (0);
		}
	}
	sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);

