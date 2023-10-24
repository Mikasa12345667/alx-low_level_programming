#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *walk = head;
	listint_t *run = head;

	if (!head)
		return (NULL);

	while (walk && run && run->next)
	{
		run = run->next->next;
		walk = walk->next;
		if (run == walk)
		{
			walk = head;
			while (walk != run)
			{
				walk = walk->next;
				run = run->next;
			}
			return (run);
		}
	}

	return (NULL);
}
