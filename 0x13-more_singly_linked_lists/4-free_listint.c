#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the first element of the list
 **/
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
