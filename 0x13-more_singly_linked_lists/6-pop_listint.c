#include "lists.h"
#include <stdio.h>

/**
 * pop_listint -  function that deletes the head node of linked list,
 * and returns the head node’s data (n).
 * @head: pointer to listint_t structure.
 * Return: linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
