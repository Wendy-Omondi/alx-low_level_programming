#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list.
 *@head: pointer to the head of the list
 *Return: head node's data or 0 if empty
 */
int pop_listint(listint_t **head)
{

int dat;
listint_t *temp;

if (*head == NULL)
{
return (0);
}

temp = *head;
dat = (*head)->n;
*head = (*head)->next;

free(temp);

return (dat);
}
