#include "main.h"
/**
 * _strcat - concenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
