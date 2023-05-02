#include "lists.h"

/**
 * add_nodeint - adds  new node at the begin.
 * of a linked list function.
 *
 * @head: head of a list function in the program
 *
 * @n: n element value in the program.
 *
 * Return: The address of the new elements. Nothing if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
