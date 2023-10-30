#include "lists.h"
/**
* check_cycle - Checks if Linked List has a Cycle
* @list: linked list checked
* Return: 1 if cycle present; 0 if no.
*/
int check_cycle(listint_t *list)
{
listint_t *slow = list;
listint_t *fast = list;
if (!list)
return (0);
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
return (1);
}
return (0);
}

