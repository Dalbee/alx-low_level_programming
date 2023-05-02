#include "lists.h"

/**
 * delete_nodeint_at_index - This fx. deletes the node at index
 * of a linked list.
 * @head: the head of a list.
 * @index: the index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *prev; /**pointer to previous node*/
	listint_t *next;/**pointer to next node*/

	prev = *head;

	if (index != 0)
	{
		for (k = 0; k < index - 1 && prev != NULL; k++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
