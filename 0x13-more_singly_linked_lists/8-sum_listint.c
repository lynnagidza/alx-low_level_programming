#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node in the list
 *
 * Return: sum of all data, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *current;

    for (current = head; current != NULL; current = current->next)
    {
        sum += current->n;
    }

    return sum;
}
