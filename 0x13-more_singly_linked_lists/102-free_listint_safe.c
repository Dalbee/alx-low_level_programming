#include "lists.h"

/**
 * free_listp2 - a fx. that frees a linked list
 * @head: the head of a list.
 *
 * Return: nothing beacuase it uses the void function.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - a fx. that safely  frees a linked list.
 * @h: the head of a list.
 *
 * Return: the size of the list that was freed.
 * declare a variable called num_of_nodes to keep track of the number of nodes
 * in the list. Also, declare three pointers: hptr,new_node, and add. hptr
 * is used to keep track of the nodes that have already been traversed,
 * new_node is used to create new nodes for hptr,and add is used to
 * traverse hptr
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_of_nodes = 0;
	listp_t *hptr, *new_node, *add;
	listint_t *current;

	hptr = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = hptr;
		hptr = new_node;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (num_of_nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		num_of_nodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (num_of_nodes);
}
