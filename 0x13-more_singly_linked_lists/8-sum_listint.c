#include "lists.h"

/**
 * sum_listint - a function that sums values from listint_t
 * @head: pointer listint_t structure
 * Return: sum of all the data n or return (0) 
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
	
}
