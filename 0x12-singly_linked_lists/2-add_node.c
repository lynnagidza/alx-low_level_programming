#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *str_dup;
size_t len = 0;

while (str[len])
len++;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

str_dup = strdup(str);
if (str_dup == NULL)
{
free(new_node);
return (NULL);
}

new_node->str = str_dup;
new_node->next = *head;
*head = new_node;

return (new_node);
}
