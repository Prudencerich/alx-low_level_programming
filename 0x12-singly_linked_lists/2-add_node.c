#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list function in the program.
  *
  * @head: The original linked list function in the program.
  *
  * @str: The string to add to the node function in the program.
  *
  * Return: The address of the new list or NULL if it failed function in the program.
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
  * _strlen - Returns the length of a string function in the program.
  *
  * @s: String to count function in the program.
  *
  * Return: String length function in the program.
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
