#include "lists.h"

/**
 *add_dnodeint - adds a new node a the begining of the list
 *@head: head of list
 *@n: number to put in new node
 *Return: address to new element or NUL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
(*head)->prev = new;
*head = new;

return (new);
}
