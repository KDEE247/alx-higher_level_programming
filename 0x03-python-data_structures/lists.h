#include <stddef.h>
#ifndef LISTS_H
#define LISTS_H
/**
 * struct listint_s - Singly Linked List.
 * @n: Integers.
 * @next: Pts To The Next Node.
 * Description: Singly Linked List Node Structures.
 * for project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int is_palindrome(listint_t **head);

#endif /* LISTS_H */
