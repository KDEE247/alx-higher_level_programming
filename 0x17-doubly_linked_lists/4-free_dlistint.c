#include "lists.h"
/**
 * free_dlistint - Frees dlistint_t Lists.
 * @head: Ptr to Head of the List.
 * Return: Nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
