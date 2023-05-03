#include "lists.h"

/**
 * find_listint_loop - a fx. that finds the loop in a linked list.
 * @head: the head of a list.
 *
 * Return: the address of the node where the loop starts.
 * the head is the slower pointer moves one node at a time.
 * Both pointers head and prev are used to transverse the list and
 * move one node at a time
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *q2;/**Faster pointer*/
	/* -moves two nodes at a time*/
	listint_t *prev;
	/** Moving at same speed*/
	q2 = head;/**pointer starts*/
	/*at head of list*/
	prev = head;/**pointer starts*/
	/*@node where loop isdetected*/
	while (head && q2 && q2->next)
	{
		head = head->next;
		q2 = q2->next->next;

		if (head == q2)
		{
			head = prev;
			prev =  q2;
			while (1)
			{
				q2 = prev;
				while (q2->next != head && q2->next != prev)
				{
					q2 = q2->next;
				}
				if (q2->next == head)
					break;

				head = head->next;
			}
			return (q2->next);
		}
	}

	return (NULL);
}
