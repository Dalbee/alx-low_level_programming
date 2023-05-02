#include "lists.h"

/**
 * get_nodeint_at_index - a fx. that returns the nth node of a linked list
 * @head: the head of a list.
 * @index: the index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k; /**temp variable k keeps track of the current index*/

	for (k = 0; k < index && head != NULL; k++)
	{
		head = head->next;
	}

	return (head);
}
