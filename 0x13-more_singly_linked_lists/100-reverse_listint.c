#include "lists.h"

/**
 * reverse_listint - Reverses a list.
 * @head: A pointer to the address of the head of the list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *pro, *prev;

if (head == NULL || *head == NULL)
return (NULL);

prev = NULL;

while ((*head)->next != NULL)
{
pro = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = pro;
}

(*head)->next = prev;

return (*head);
}
