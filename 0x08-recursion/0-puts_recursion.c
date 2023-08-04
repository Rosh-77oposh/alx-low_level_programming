#include "main.h"
/**
 * _puts_recursion - function like puts ();
 * @s: input value
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{

	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 10);
	}

	else 
		_putchar('\n');
}