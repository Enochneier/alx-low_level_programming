#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index -  function that returns the nth node 
 * @head: pointer to listint_t structure
 * @index: The index of the node, starting at 0
 * Return: pointer to node at specified index, or NULL if not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		i = 0;
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
