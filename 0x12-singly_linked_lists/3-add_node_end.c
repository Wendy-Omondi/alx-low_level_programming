#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
int i;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

if (*head != NULL)
{
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new;
}
else
*head = new;

new->next = NULL;
new->str= strdup(str);
i = 0;

while (str[i] != '\0')
i++;
new->len = i;

return (new);
}
