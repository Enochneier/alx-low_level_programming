#include "lists.h"
#include <string.h>

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to list_t structure
 * @n: integer data to put into the new node
 * Return: the address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (! *head)
	{
		return (NULL);
	}
	else {
		(*head)->n = n;
		(*head)->next = new_node;
		return (*head);
	}
}
