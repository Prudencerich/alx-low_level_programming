#include "lists.h"

/**
 * pop_listint - delete head node
 * a linked_list function program.
 *
 * @head: head list function in th program.
 *
 * Return: head node's function data in the program.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
