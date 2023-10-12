#include "lists.h"

/**
 * sum_dlistint - A function that returns the sums all of the
 * data(n) of a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 *
 * Return: The sum of all data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
