#include "lists.h"

/**
 * free_listp - a fx. that frees a linked list
 * @head: the head of a list.
 *
 * Return: no return because it is a void function.
 */
void free_listp(listp_t **head)
{
	listp_t *temp_value;/**pointer temp*/
	/**variable stores current node to be freed*/
	listp_t *current;/**pointer to iterate through the list*/

	if (head != NULL)
	{
		current = *head;
		while ((temp_value = current) != NULL)
		{
			current = current->next;
			free(temp_value);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - a fx. to safely print a linked list.
 * @head: the head of a list.
 *
 * Return: the number of nodes in the list.
 * Declare a variable called num_of_nodes to keep track of the number
 * of nodes in the list. Also, declare three pointers: hptr, new_node,
 * and add. hptr is used to keep track of the nodes that have already
 * been traversed, new_node is used to create new nodes for hptr,
 * and add is used to traverse hptr
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_of_nodes = 0;
	listp_t *hptr, *new_node, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = hptr;
		hptr = new_node;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (num_of_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_of_nodes++;
	}

	free_listp(&hptr);
	return (num_of_nodes);
}
