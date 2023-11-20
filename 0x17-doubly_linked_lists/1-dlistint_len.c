#include "lists.h"
/**
 * dlistint_len - Returns nos of elements in a double linked list.
 * @h: Head of The List.
 * Return: Nos of Nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
