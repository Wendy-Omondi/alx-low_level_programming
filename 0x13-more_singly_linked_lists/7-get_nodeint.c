#include "lists.h"
/**
 *get_nodeint_at_index - gets the nth node in a list
 *@head: pointer to head of the list
 *@index: index of the node starting at 0
 *Return: nth node of a list otherwise NILL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int nth = 0;

if (index == '\0')
return (NULL);

while (nth)
{
head = head->next;
}
return (head);
}
