#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specified index in a linked list
 * @head: pointer
 * @index: index of the node to delete
 * function deletes the node at the specified index in a linked list of type
 * listint_t.
 *
 * Return: 1 (Success) if the node is deleted, or -1 (Fail) otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

