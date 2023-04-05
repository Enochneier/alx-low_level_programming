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
	char *s, *start;
	int len = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	s = malloc(sizeof(char) * (len + 1));
	start = s;

	if (s != NULL)
	{
		for (; i < len; i++)
		{
			s[i] = *str;
			str++;
		}
		s[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
