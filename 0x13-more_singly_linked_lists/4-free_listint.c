#include "lists.h"

/**
 * free_listint - frees a linked list function in the program.
 *
 * @head: head of a list function in the program.
 *
 * Return: NULL.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
