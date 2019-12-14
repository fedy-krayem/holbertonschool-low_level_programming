#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given position
 * @h: head of list
 * @idx: index
 * @n: number
 * Return: address of new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *p = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	if (p == NULL)
		return (NULL);
	while (p != NULL)
	{
		if (i == idx || (i + 1 == idx && p->next == NULL))
			break;
		p = p->next;
		i++;
	}
	if (p != NULL && i == idx)
	{
		new->next = p;
		new->prev = p->prev;
		p->prev->next = new;
		p->prev = new;
		return (new);
	}
	free(new);
	return (NULL);
}
