#include "lists.h"

/**
 *add_nodeint - adds a node at the begining of a list
 *@head: a pointer to the hea of the listint_t
 *@n: the new integer to be added to the list
 *Return: address to the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
int i;
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}

for (i = 0; i;)
i++;
new->n = n;
new->next = *head;

*head = new;

return (new);
}
