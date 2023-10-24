#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beggining of a listint_t list
 * @head: A pointer to the address of the head of the listint_t list
 * @n: The integer for the new mode to contain
 *
 * Return: If the function fails - NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new ==  NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
