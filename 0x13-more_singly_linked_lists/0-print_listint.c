#include "lists.h"

/**
 *print_listint - prints all elements of a list
 *@h: the listint_t
 *Return: Number of nodes in h
 */
size_t print_listint(const listint_t *h)
{
int nodes = 0;


while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
