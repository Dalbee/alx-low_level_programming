#include "lists.h"

/**
 * free_listint2 - a fx. that frees a linked list
 * @head: the head of a list.
 *
 * Return: nothing because it uses the void function.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_value; /**pointer temp*/
	/**variable stores current node to be freed*/
	listint_t *current; /**pointer to iterate through the list*/

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
