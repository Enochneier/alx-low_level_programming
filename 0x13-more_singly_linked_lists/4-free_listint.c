#include "lists.h"
#include <stdio.h>

/**
 * free_listint - function that frees a linked list
 * @head: pointer to listint_t structure
 * Return: void (0)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
