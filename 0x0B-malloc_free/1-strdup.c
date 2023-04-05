#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter. 
 * @str : input pointer of the string to duplicate
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l] != '\0')
	{
		l++;
	}

	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
