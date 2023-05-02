#include "lists.h"

/**
 * add_nodeint_end - this fx. adds a new node at the end
 * of a linked list
 * @head: the head of a list.
 * @n: n elements.
 *
 * Return: the address of the new element. and NUll if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elements; /**pointer to new elements*/
	listint_t *temp_value; /**pointer to temp_value*/

	(void)temp_value;

	new_elements = malloc(sizeof(listint_t));

	if (new_elements == NULL)
		return (NULL);

	new_elements->n = n;
	new_elements->next = NULL;
	temp_value = *head;
	if (*head == NULL)
	{
		*head = new_elements;
	}
	else
	{
		while (temp_value->next != NULL)
		{
			temp_value = temp_value->next;
		}
		temp_value->next = new_elements;
	}

	return (*head);
}
