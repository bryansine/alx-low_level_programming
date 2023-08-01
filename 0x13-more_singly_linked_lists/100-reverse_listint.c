#include "lists.h"

/**
  * reverse_listint - function that reverses a listint_t linked list.
  * @head: pointer to the first node in the list
  * Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *end;

	if (head == NULL || *head == NULL)
		return (NULL);

	end = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = front;
	}

	(*head)->next = end;

	return (*head);
}
