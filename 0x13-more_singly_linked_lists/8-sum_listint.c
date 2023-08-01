#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: head node
 *
 * Return: the sum of data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
}
