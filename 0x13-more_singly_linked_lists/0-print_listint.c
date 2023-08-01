#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prits all the  elements of a listint_t list.
 * @h:the singly list passed
 * Return: Return the number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;

	unsigned int cntr = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
