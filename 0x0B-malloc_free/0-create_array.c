#include <stdlib.h>
#include "main.h"

/**
 *  A function that creates an array of chars, and initializes
 *  it with a specific char.
 *  @n:sizeof the array
 *  @c:character to initialze the array
 *  Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n = 0;
	char *s;
	
	s = malloc(sizeof(char) * size);

	if (s ==  NULL || size == 0)
	{
		return (NULL);
	}
	while (n < size)
	{
	       	s[n] = c;
		n++;
	}
		return (s);
}
		

