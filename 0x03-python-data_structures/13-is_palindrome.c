#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
*add_nodeint - Adds New Nodes At The Beginning Of Listint_t Lists
*@head: Head of Listint_t
*@n: Int To Add In Listint_t List.
*Return: Address Of New Element, Or NULL If It Failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
/**
*is_palindrome - Identify If A Singly Linked List Is Palindrome.
*@head: Head Of Listint_t node.
*Return: 1 If Palindrome; Else 0.
*/
int is_palindrome(listint_t **head)
{
	listint_t *head2 = *head;
	listint_t *aux = NULL, *aux2 = NULL;

	if (*head == NULL || head2->next == NULL)
		return (1);
	while (head2 != NULL)
	{
		add_nodeint(&aux, head2->n);
		head2 = head2->next;
	}
	aux2 = aux;
	while (*head != NULL)
	{
		if ((*head)->n != aux2->n)
		{
			free_listint(aux);
			return (0);
		}
		*head = (*head)->next;
		aux2 = aux2->next;
	}
	free_listint(aux);
	return (1);
}
