#include "lists.h"

/**
 * dlistint_len - counts elements of a linked list to find its length
 *
 * @h: head of list
 * Return: Returns number of elements in doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
int i; /*counter*/
i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
