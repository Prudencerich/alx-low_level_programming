#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds new nodes to the beginning of a list function in the program.
  *
  * @head: Original linked list function in the program.
  *
  * @str:string function to be added to the node in the program.
  *
  * Return: Address ofnew list or Nothing if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
  * _strlen - Returns the length of a string function in a program.
  *
  * @s: Strings_count
  *
  * Return:length of string.
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
