#include "lists.h"

/**
 * insert_nodeint_at_index - a fx. that inserts a new node
 * at a given position.
 * @head: the head of a list.
 * @idx: the index of the list where the new node is
 * added.
 * @n: an integer element.
 *
 * Return: the address of the new node, or NULL if it
 * fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new_node; /**pointer to newly created node*/
	listint_t *h; /*pointer to head of the linked list*/

	h = *head;

	if (idx != 0)
	{
		for (k = 0; k < idx - 1 && h != NULL; k++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = h->next;
		h->next = new_node;
	}

	return (new_node); /**newly created node*/
}
