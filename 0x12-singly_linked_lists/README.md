contains C  files on singly linked lists

0. file 0-print_list.c is a function that prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf

1. file 1-list_len.c is  a function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h); 

2. file 2-add_node.c is a function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

3. file 3-add_node_end.c is  a function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

4. file 4-free_list.c is a function that frees a list_t list.
Prototype: void free_list(list_t *head);

100. file 100-first.c is a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

101. file-hello_holberton.asm is a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
