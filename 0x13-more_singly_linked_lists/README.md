## General Requirements:
- All your files should end with a new line
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use _putchar
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
- All your header files should be include guarded

#### Mandatory Tasks
Task 0: Write a function that prints all the elements of a listint_t list.
Task 0 Requirements:
	- Prototype: size_t print_listint(const listint_t *h);
	- Return: the number of nodes
	- You are allowed to use printf
	- file name: 0-print_listint.c

Task 1: Write a function that returns the number of elements in a linked listint_t list.
Task 1 Requirements:
	- Prototype: size_t listint_len(const listint_t *h);
	- file name: 1-listint_len.c
	
Task 2: Write a function that adds a new node at the beginning of a listint_t list.
Task 2 Requirements:
	- Prototype: listint_t *add_nodeint(listint_t **head, const int n);
	- Return: the address of the new element, or NULL if it failed
	- file name: 2-add_nodeint.c
	
Task 3: Write a function that adds a new node at the end of a listint_t list.
Task 3 Requirements:
	- Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
	- Return: the address of the new element, or NULL if it failed
	- file name: 3-add_nodeint_end.c
	
Task 4: Write a function that frees a listint_t list.
Task 4 Requirements:
	- Prototype: void free_listint(listint_t *head);
	- file name: 4-free_listint.c

Task 5: Write a function that frees a listint_t list.
Task 5 Requirements:
	- Prototype: void free_listint2(listint_t **head);
	- The function sets the head to NULL
	- file name: 5-free_listint2.c

Task 6: Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Task 6 Requirements:
	- Prototype: int pop_listint(listint_t **head);
	- if the linked list is empty return 0
	- file name: 6-pop_listint.c

Task 7: Write a function that returns the nth node of a listint_t linked list.
Task 7 Requirements:
	- Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
	- where index is the index of the node, starting at 0
	- if the node does not exist, return NULL
	- file name: 7-get_nodeint.c

Task 8: Write a function that returns the sum of all the data (n) of a listint_t linked list.
Task 8 Requirements:
	- Prototype: int sum_listint(listint_t *head);
	- if the list is empty, return 0
	- file name: 8-sum_listint.c

Task 9: Write a function that inserts a new node at a given position.
Task 9 Requirements:
	- Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
	- where idx is the index of the list where the new node should be added. Index starts at 0
	- Returns: the address of the new node, or NULL if it failed
	- if it is not possible to add the new node at index idx, do not add the new node and return NULL
	- file name: 9-insert_nodeint.c

Task 10: Write a function that deletes the node at index index of a listint_t linked list.
Task 10 Requirements:
	- Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
	- where index is the index of the node that should be deleted. Index starts at 0
	- Returns: 1 if it succeeded, -1 if it failed
	- file name: 10-delete_nodeint.c

#### Advanced Tasks
Task 11: Write a function that reverses a listint_t linked list.
Task 11 Requirements:
	- Prototype: listint_t *reverse_listint(listint_t **head);
	- Returns: a pointer to the first node of the reversed list
	- You are not allowed to use more than 1 loop.
	- You are not allowed to use malloc, free or arrays
	- You can only declare a maximum of two variables in your function
	- file name: 100-reverse_listint.c
	
Task 12: Write a function that prints a listint_t linked list.
Task 12 Requirements:
	- Prototype: size_t print_listint_safe(const listint_t *head);
	- Returns: the number of nodes in the list
	- This function can print lists with a loop
	- You should go through the list only once
	- If the function fails, exit the program with status 98
	- file name: 101-print_listint_safe.c

Task 13: Write a function that frees a listint_t list.
Task 13 Requirements:
	- Prototype: size_t free_listint_safe(listint_t **h);
	- This function can free lists with a loop
	- You should go though the list only once
	- Returns: the size of the list that was free’d
	- The function sets the head to NULL
	- file name: 102-free_listint_safe.c

Task 14: Write a function that finds the loop in a linked list.
Task 14 Requirements:
	- Prototype: listint_t *find_listint_loop(listint_t *head);
	- Returns: The address of the node where the loop starts, or NULL if there is no loop
	- You are not allowed to use malloc, free or arrays
	- You can only declare a maximum of two variables in your function
	- file name: 103-find_loop.c