#include "lists.h"

/**
 * pop_listint - this fx. deletes the head node of
 * a linked list
 * @head: the head of a list.
 *
 * Return: the data of the head node.
 */
int pop_listint(listint_t **head)
{
	int head_node; /**temp variable to store the data of*/
	/* the head node to be deleted*/
	listint_t *h; /**to temporarily store the*/
	/**next node after the head*/
	listint_t *current; /*temp variable to iterate through the list*/

	if (*head == NULL)
		return (0);

	current = *head;

	head_node = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (head_node);
}
