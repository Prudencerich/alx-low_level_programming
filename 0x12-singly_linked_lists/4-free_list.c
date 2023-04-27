#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a linked list function in the program.
  *
  * @head: The pointer to the first node of linked list function in the program.
  *
  * Return: NULL function in the program.
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
