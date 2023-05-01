#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds new nodes to the end of list function in a program.
  *
  * @head:Original linked list function in a program.
  *
  * @str: String to be added to the node function in the program.
  *
  * Return: Address of new list or Nothing if it failed during execution.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head  = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new_list;
			return (temp);
		}
	}

	return (NULL);
}

/**
  * _strlen - Returns the string length function in the program.
  *
  * @s: String_counted in the program.
  *
  * Return: Length of string function in the program.
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
