#include "main.h"
/**
 * _isalpha -Checks for alphabetic order
 * Return: i if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
