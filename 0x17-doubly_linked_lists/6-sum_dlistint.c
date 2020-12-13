#include "lists.h"

/**
 * sum_dlistint - returns the sum of all list nodes
 *
 * @head: head of the list
 * Return: Returns number of nodes in list
 */
int sum_dlistint(dlistint_t *head)
{
int i;

i = 0;
while (head != NULL)
{
i += head->n;
head = head->next;
}
return (i);
}
