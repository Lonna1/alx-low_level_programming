#include "lists.h"

/**
 * reverse_listint - a function that reverses
 * a listint_t linked list
 * @head: pointer to the head of a list.
 * Return: a pointer to the first
 * node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
