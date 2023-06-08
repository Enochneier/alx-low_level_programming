#include "main.h"

/**
 * _strlen_recursion - recursive function that returns the length of a string
 * @s: An input string to printing
 * Return: Nothing.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{	
		return (0);
	}
	return 1 + _strlen_recursion(s + 1);
}
