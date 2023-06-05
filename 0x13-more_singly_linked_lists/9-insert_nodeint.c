#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a linked list
 * @head: pointer
 * @idx: Index where the new node is to be outputted
 * @n: data to insert in the new node
 * Descroption : a function to insert a new node with the specified data at the given index in
 * a linked list of type listint_t.
 * Return: Pointer to the new node, or NULL if the insertion fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

