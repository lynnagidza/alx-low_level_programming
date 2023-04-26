#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to a pointer to the first node of the list
 * @idx: Index of the list where the new node should be added
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *prev_node = NULL, *current_node = *head;
    unsigned int i = 0;

    if (!head)
        return (NULL);

    /* Create a new node */
    new_node = malloc(sizeof(*new_node));
    if (!new_node)
        return (NULL);

    new_node->n = n;

    /* Special case: Insert at the beginning of the list */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    /* Traverse the list until the desired position is reached */
    while (current_node && i < idx)
    {
        prev_node = current_node;
        current_node = current_node->next;
        i++;
    }

    /* If the index is out of range, delete the new node and return NULL */
    if (i < idx)
    {
        free(new_node);
        return (NULL);
    }

    /* Insert the new node between prev_node and current_node */
    prev_node->next = new_node;
    new_node->next = current_node;

    return (new_node);
}
