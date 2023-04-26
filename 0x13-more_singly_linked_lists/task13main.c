#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head, *node, *loop_start;
    int i;

    head = NULL;

    for (i = 0; i < 10; i++)
        add_nodeint(&head, i);

    node = head;
    while (node->next)
        node = node->next;

    node->next = head->next->next;

    loop_start = find_listint_loop(head);
    printf("Loop starts at [%p] %d\n", (void *)loop_start, loop_start->n);

    return (0);
}
