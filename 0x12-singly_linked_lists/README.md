# Singly Linked Lists

## Description

This project consists of several tasks related to singly linked lists. Each task involves implementing a specific function to perform operations on linked lists.

## Tasks

1. Task 0: Print List
   - Write a function that prints all the elements of a `list_t` list. The function should return the number of nodes in the list.
   - Prototype: `size_t print_list(const list_t *h);`

2. Task 1: List Length
   - Write a function that returns the number of elements in a `list_t` list.
   - Prototype: `size_t list_len(const list_t *h);`

3. Task 2: Add Node
   - Write a function that adds a new node at the beginning of a `list_t` list. The function should return the address of the new element or `NULL` if it fails.
   - Prototype: `list_t *add_node(list_t **head, const char *str);`

4. Task 3: Add Node at the End
   - Write a function that adds a new node at the end of a `list_t` list. The function should return the address of the new element or `NULL` if it fails.
   - Prototype: `list_t *add_node_end(list_t **head, const char *str);`

5. Task 4: Free List
   - Write a function that frees a `list_t` list.
   - Prototype: `void free_list(list_t *head);`

6. Task 5: The Hare and the Tortoise (Advanced)
   - Write a function that prints the message "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the `main` function is executed. You are allowed to use the `printf` function.

7. Task 6: Real Programmers Can Write Assembly Code in Any Language (Advanced)
   - Write a 64-bit program in assembly that prints "Hello, Holberton," followed by a new line. You are only allowed to use the `printf` function.