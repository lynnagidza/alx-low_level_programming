#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", strlen(h->str), h->str);

		count++;
		h = h->next;
	}

	return (count);
}
