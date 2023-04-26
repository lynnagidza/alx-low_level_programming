#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n).
 *
 * @head: Pointer to the first node of the list
 *
 * Return: The head node's data (n), 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    int n = 0;
    listint_t *temp;

    if (*head == NULL)
        return (0);

    n = (*head)->n;
    temp = (*head)->next;
    free(*head);
    *head = temp;

    return (n);
}
