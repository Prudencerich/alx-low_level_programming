#include "lists.h"

/**
 * reverse_listint - reverse linked_list in the program.
 *
 * @head: head list in the program.
 *
 * Return: points first node function in the program.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
