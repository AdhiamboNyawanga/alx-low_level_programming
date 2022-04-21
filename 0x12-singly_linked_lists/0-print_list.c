#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
  */

size_t print_list(const list_t *x)
{
	size_t nodes = 0;

	while (x)
	{
		if (x->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", x->len, x->str);

		nodes++;
		x = x->next;
	}

	return (nodes);
}
