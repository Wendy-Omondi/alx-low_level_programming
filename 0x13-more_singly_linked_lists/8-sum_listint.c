#include "lists.h"

/**
 *sum_listint - Calculate sum of all data (n)
 *@head: pointer to head of the list
 *Return: sum of all the data otherwise 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
