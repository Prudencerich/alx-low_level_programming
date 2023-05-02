#include "lists.h"

/**
 * free_listint2 - frees a linked_list in the program.
 *
 * @head: head of a list function in the program.
 *
 * Return: NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
