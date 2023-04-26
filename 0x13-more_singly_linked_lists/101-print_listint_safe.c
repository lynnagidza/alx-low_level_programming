#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *tortoise, *hare;
    size_t count = 0;

    if (!head)
        exit(98);

    tortoise = head;
    hare = head->next;

    while (hare && hare < tortoise)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        tortoise = tortoise->next;
        hare = hare->next;
        count++;
        if (!hare)
        {
            printf("[%p] %d\n", (void *)tortoise, tortoise->n);
            count++;
            break;
        }
        hare = hare->next;
        count++;
    }

    if (hare)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        count++;
        do
        {
            tortoise = tortoise->next;
            count++;
        } while (tortoise != hare);
        printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
    }
    else
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        count++;
    }

    return (count);
}
