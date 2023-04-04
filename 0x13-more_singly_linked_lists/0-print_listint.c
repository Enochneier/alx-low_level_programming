#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to listint structure
 * Return: number of nodes in the list.
 */

 size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	for (; h; h = h->next)
	{
		int n = h->n;
		while (n > 0) {
			putchar('0' + n % 10);
			n /= 10;
		}
		putchar('\n');
		nodes++;
	}
	return (nodes);
}
