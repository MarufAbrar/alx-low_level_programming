#include "lists.h"
/**
 *insert_dnodeint_at_index - function that inserts a
 *		new node at a given position
 *@h: pointer to head of linked list
 *@idx: index of position starting from 0
 *@n: integer to add at node
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (; idx != 1; idx--)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;
	return (new);
}
