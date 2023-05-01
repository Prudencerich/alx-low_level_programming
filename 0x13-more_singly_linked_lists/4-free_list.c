#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees  linked_list function in the program.
  *
  * @head Points to the first node of linked list function in the program.
  *
  * Return: NULL.
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
