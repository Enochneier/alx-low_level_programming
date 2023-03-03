#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char uc = 'A';
	int isupper = 0;

	for (; uc <= 'Z'; uc++)
	{
		if (c == uc)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
