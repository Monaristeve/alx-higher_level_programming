#include "lists.h"
/**
 * insert_node - it Inserts a number into a sorted singly-linked list
 * @head: pointer the head of the linked list.
 * @number: number to insert
 * Return: 0 If the function fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = number;

	if (node == NULL || node->n >= number)
	{
		current->next = node;
		*head = current;
		return (current);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	current->next = node->next;
	node->next = current;

	return (current);
}
