#include "lists.h"

/**
 * print_listint - This fx. prints all the elements of a list.
 * @h: the head of a list.
 *
 * Return: num_of_nodes (numbers of nodes).
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
