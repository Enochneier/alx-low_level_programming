#include "main.h"

/**
 * main- entry 
 *
 * Description: function that checks for lowercase character.
 * Return: 1 if char is lowercase, otherwise o
 */int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
