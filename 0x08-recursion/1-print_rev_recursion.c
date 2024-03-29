#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: An input string to printing
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
