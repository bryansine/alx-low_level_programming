#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to the first node of a linked list that is being freed
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head != NULL)
	{
		current = *head;
		while (current)
		{
			next = current->next;
			free(current);
			current = next;
		}
		*head = NULL;
	}
}
