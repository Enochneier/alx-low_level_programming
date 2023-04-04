#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - function that frees a list
 * @h: pointer listint_t structure
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp = NULL;

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
			count++;
		}
		else
		{
			break;
		}
	}
	if (*h != NULL)
	{
		 count += free_listint_safe(&(*h)->next);
	}
	*h = NULL;
	return count;
}
