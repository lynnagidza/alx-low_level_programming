#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes a node at a given index of a list
 * @head: Pointer to a pointer pointing to the first node of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *prev;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    prev = *head;
    for (i = 0; i < index - 1; i++)
    {
        if (prev == NULL || prev->next == NULL)
            return (-1);
        prev = prev->next;
    }

    temp = prev->next;
    prev->next = temp->next;
    free(temp);
    return (1);
}
