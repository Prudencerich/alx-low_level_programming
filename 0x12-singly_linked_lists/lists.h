#ifndef _LINKED_LIST
#define _LINKED_LIST

/**
 * struct list_s - singly linked list entry point in the program.
 *
 * @str: string - (malloc'ed string) function as indicated in the program.
 *
 * @len: length of the string function as indicated in the program.
 *
 * @next: points to the next node function as indicated in the program.
 *
 * Description: singly linked list node structure
 * for c programming alx project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _strlen(const char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
