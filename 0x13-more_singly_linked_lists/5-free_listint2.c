#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - function that frees a list and sets head to NULL
 * @head: pointer to listint_t structure
 * Return: void (0)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	temp = *head;
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
