#include "lists.h"

/**
 * add_nodeint - this fx. adds a new node at the beginning
 * of a linked list
 * @head: the head of a list.
 * @n: n elements.
 *
 * Return: the address of the new element. and returns NUll if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elements;

	new_elements = malloc(sizeof(listint_t));

	if (new_elements == NULL)
		return (NULL);

	new_elements->n = n;
	new_elements->next = *head;
	*head = new_elements;

	return (*head);
}
