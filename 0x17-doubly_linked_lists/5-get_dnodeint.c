#include "lists.h"

/**
 * get_dnodeint_at_index - gets a the value of a node at the index
 *
 * @head: head of dlist
 * @index: index of the node starting from 0
 * Return: nth node otherwise NULL if nonexistent
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *temp;

if (head == NULL)
return (NULL);

i = 0;
temp = head;

while (i != index)
{
temp = temp->next;
i++;

if (temp == NULL)
return (NULL);
}
return (temp);
}
