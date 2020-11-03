#include "lists.h"

/**
 *listint_len - prints number of elements in a linked list
 *@h: the listint_t
 *Return: nmber of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
size_t elements = 0;

while (h != NULL)
{
elements++;
h = h->next;
}
return (elements);
}
