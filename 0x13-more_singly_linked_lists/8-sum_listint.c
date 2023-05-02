#include "lists.h"

/**
 * sum_listint - a fx. that returns the sum of all the data (n) of
 * a linked list.
 * @head: the head of a list.
 *
 * Return: the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum_data;/**Initialization variable*/

	sum_data = 0;
	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);/**returns total sum of all data in linked list*/
}
