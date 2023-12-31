* PROJECT: 0x17. C - Doubly linked lists

* Requirements:
1. Allowed editors: vi, vim, emacs
2. All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. The only C standard library functions allowed are malloc, free, printf and exit.

* TASK:
0. Print list.
* Write a function that prints all the elements of a dlistint_t list.
* Prototype: size_t print_dlistint(const dlistint_t *h);
* Return: the number of nodes
* Format: see example.
* File: 0-print_dlistint.c

1. List length.
* Write a function that returns the number of elements in a linked dlistint_t list.
* Prototype: size_t dlistint_len(const dlistint_t *h);
* File: 1-dlistint_len.c.

2. Add node.
* Write a function that adds a new node at the beginning of a dlistint_t list.
* Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed
* File: 2-add_dnodeint.c.

3. Add node at the end.
* Write a function that adds a new node at the end of a dlistint_t list.
* Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed
* File: 3-add_dnodeint_end.c.

4. Free list.
* Write a function that frees a dlistint_t list.
* Prototype: void free_dlistint(dlistint_t *head);
* File: 4-free_dlistint.c

5. Get node at index.
* Write a function that returns the nth node of a dlistint_t linked list.
* Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
* where index is the index of the node, starting from 0
* if the node does not exist, return NULL.
* File: 5-get_dnodeint.c.

6. Sum list.
* Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
* Prototype: int sum_dlistint(dlistint_t *head);
* if the list is empty, return 0
* File: 6-sum_dlistint.c.

7. Insert at index.
* Write a function that inserts a new node at a given position.
* Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
* where idx is the index of the list where the new node should be added. Index starts at 0
* Returns: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at index idx, do not add the new node and return NULL
* File: 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c

8. Delete at index.
* Write a function that deletes the node at index index of a dlistint_t linked list.
* Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
* where index is the index of the node that should be deleted. Index starts at 0
* Returns: 1 if it succeeded, -1 if it failed.
* File: 8-delete_dnodeint.c
