#include <stdlib.h>
#include "lists.h"

/**
 * Description:  function frees the memory allocated for a linked list and
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

