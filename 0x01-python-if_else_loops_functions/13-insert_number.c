#include "lists.h"
/**
 * insert_node - Inserts nos to a Sorted Singly-Linked List.
 * @head: Ptr to the head of the linked list.
 * @number: The nos to insert.
 * Return: If the function fails: NULL.
 * Otherwise - Ptr to New Node in linked lists.
 */
listint_t *insert_node(listint_t **head, int number)
{
        listint_t *node = *head, *new;

        new = malloc(sizeof(listint_t));
        if (new == NULL)
                return (NULL);
        new->n = number;

        if (node == NULL || node->n >= number)
        {
                new->next = node;
                *head = new;
                return (new);
        }

        while (node && node->next && node->next->n < number)
                node = node->next;

        new->next = node->next;
        node->next = new;

        return (new);
}
