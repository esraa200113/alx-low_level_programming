#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t linked list.
 * @head: Pointer to the pointer to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;
	
	if (head == NULL || *head == NULL)
		return -1;
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	prev = NULL;
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}

