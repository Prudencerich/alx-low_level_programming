#include "lists.h"

/**
 * print_listint - prints the elements of a list function in the program.
 *
 * @h: head of a list node in the program.
 *
 * Return: numbers of nodes function in the program.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
