#include "lists.h"
/**
 *add_dnodeint_end - function that adds node to the end of dlistint_t list
 *@head: pointer to head of list
 *@n: integer value to add
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	new->prev = temp;
	temp->next = new;
	return (new);
}
