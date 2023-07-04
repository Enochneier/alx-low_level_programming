#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements in linked listint_t list
 * @h: pointer to listint_t structure
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next)
	{
		nodes++;
	}
	return (nodes);
}
