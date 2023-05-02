#include "lists.h"

/**
 * reverse_listint - this fx. reverses a linked list.
 * @head: the head of a list.
 *
 * Return: the pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *c;/**pointer to keep track of current node in linked list*/
	listint_t *n;/**pointer to keep track of next node in linked list*/

	c = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = c;
		c = *head;
		*head = n;
	}

	*head = c;
	return (*head);
}
