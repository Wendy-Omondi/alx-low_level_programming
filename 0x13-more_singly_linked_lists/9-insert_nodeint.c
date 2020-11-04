#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the address of the head of the list
 *@idx: index where new node will be added
 *@n: data for the new node
 *Return: address to new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

listint_t *temp = *head, *new;
unsigned int i = 0;

new = malloc(sizeof(listint_t));
new->n = n;

if (idx == 0)
{
new->next = temp;
*head = new;
return (new);
}

while (i < idx - 1)
{
if (temp == NULL || temp->next == NULL)
return (NULL);
temp = temp->next;
}
new->next = temp->next;
temp->next = new;

return (new);
}
