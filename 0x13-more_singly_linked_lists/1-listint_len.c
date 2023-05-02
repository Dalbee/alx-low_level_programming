#include "lists.h"

/**
 * listint_len - this fx. returns the number of elements in
 * a linked list.
 * @h: the head of a list.
 *
 * Return: num_of_nodes (the numbers of nodes).
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;/** Define the size of nodes*/

	while (h != NULL)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
