#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, 
 * which contains a copy of the string given as a parameter. 
 * @str : string to duplicate
 * Return: NUll if insufficent memory was available
 */
char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int i;

	if(str == NULL){
		return (NULL);
	}

	s = malloc(sizeof(char) * (len + 1));

	if (s ==NULL) {
		return (NULL);
	}
	for (i = 0; i < len; i++) {
		s[i] = str[i];
	}
	return(s);
}

