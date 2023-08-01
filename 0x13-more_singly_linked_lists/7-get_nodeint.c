#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 * @head: pointer to the first node of the list
 * @index: number of node to access
 * Return: the nth node of a listint_t linked list
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
		head = head->next;

	return (head);
}
