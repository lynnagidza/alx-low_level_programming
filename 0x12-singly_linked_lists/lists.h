#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

/* Function prototypes */

/* Task 0 - Print List */
size_t print_list(const list_t *h);

/* Task 1 - List Length */
size_t list_len(const list_t *h);

/* Task 2 - Add Node */
list_t *add_node(list_t **head, const char *str);

/* Task 3 - Add Node at the End */
list_t *add_node_end(list_t **head, const char *str);

/* Task 4 - Free List */
void free_list(list_t *head);

/* Task 5 - The Hare and the Tortoise (Advanced) */
void before_main(void) __attribute__((constructor));

/* Task 6 - Real Programmers Can Write Assembly Code in Any Language (Advanced) */
void hello_holberton(void) __attribute__((constructor));

#endif /* LISTS_H */
