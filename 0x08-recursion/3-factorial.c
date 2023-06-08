#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: An integer input.
 * Return: -1 to indicate an error.
 */
int factorial(int n)
{
	/*Base case*/
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
