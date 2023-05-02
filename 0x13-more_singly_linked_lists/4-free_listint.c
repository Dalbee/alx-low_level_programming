#include "lists.h"

/**
 * free_listint - this fx. frees a linked list
 * @head: the head of a list.
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp_value; /**pointer to temp_value*/

	while ((temp_value = head) != NULL)
	{
		head = head->next;
		free(temp_value);
	}
}
