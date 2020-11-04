#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index of a list.
 * @head: A pointer to the address of the head of the list.
 * @index: The index of the node to be deleted
 *
 * Return: 1 on success and -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *c = *head;
unsigned int node;

if (c == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(c);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (c->next == NULL)
return (-1);

c = c->next;
}

tmp = c->next;
c->next = tmp->next;
free(tmp);
return (1);
}
