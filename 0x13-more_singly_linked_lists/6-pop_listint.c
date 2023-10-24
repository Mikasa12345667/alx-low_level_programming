#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
