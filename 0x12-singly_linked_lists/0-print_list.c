#include <stdio.h>
#include "lists.h"
/*
 * print_list - gives all the elements of a linked list
 * @h: pointer to the list_t list 
 * @ struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 * Return: the number of nodes outputted
 */

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[%d] (nil)\n", h->len);
        else
            printf("[%d] %s\n", h->len, h->str);

        count++;
        h = h->next;
    }

    return count;
}

