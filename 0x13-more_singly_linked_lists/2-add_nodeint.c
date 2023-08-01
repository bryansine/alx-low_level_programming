#include "lists.h"
/**
 * add_nodeint - function that adds a new node at
 *                              the beginning of a linked list
 * @head: pointer that points to first node in the linked list
 * @n: integer data to be added
 *
 * Return: the number of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
