#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input value
 * @needle: input value
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *1 = haystack;
		char *p = needle;

		while (*! == *p && *p != '\0')
		{
			1++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
