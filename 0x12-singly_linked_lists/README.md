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

4. file 