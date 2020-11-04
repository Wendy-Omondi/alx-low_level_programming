

#include "lists.h"
/**
 *add_nodeint_end - adds an new node at the end of a list
 *@head: pointer to the head of listint_t
 *@n: new element to be added to the list
 *Return: address to the new element or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *end;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}

if (*head != NULL)
{
end = *head;
while (end->next != NULL)
end = end->next;
end->next = *head;
}

else
*head = new;

new->n = n;
new->next = NULL;

return (*head);
}
