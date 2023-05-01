#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - as number of elements of a list function as used in the program.
  * @h: A linked list function as stated in the program
  *
  * Return: Number of elements of a list function in the program.
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
