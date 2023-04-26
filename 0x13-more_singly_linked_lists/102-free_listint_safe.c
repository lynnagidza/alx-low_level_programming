#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *temp;

    if (h == NULL)
        return (0);

    while (*h != NULL)
    {
        if (*h <= (*h)->next)
        {
            free(*h);
            size++;
            break;
        }
        temp = (*h)->next;
        free(*h);
        *h = temp;
        size++;
    }

    *h = NULL;

    return (size);
}
