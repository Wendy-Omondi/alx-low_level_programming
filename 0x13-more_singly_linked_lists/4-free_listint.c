#include "lists.h"

/**
 *free_listint - frees a listint_t list
 *@head: a pointer to the listint_h
 */
void free_listint(listint_t *head)
{


if (head != NULL)
{

free(head->next);

free(head);

}
}
