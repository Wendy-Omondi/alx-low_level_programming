#include "lists.h"

/**
 *print_list - prints all the elements of a list
 *list_t - size of list
 *Return: Number of nodes
 */                                                       
                                                          
size_t print_list(const list_t *h)
{
int nodes = 0;
while (h != NULL)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
nodes++;
}
return (nodes);
}
