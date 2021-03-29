#include "hash_tables.h"

/**
 *hash_table_print - prints hash table
 *@ht: the hash table
 *Return: ht
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
unsigned long int size;
unsigned int nodes;
hash_node_t *element;

i = 0;
nodes = 0;

if (ht == NULL)
return;

size = ht->size;

printf("{");

for (i = 0; i < size; i++)
{
if (ht->array[i] != NULL)
{
element = ht->array[i];
while (element != NULL)
{
if (nodes > 0)
printf(", ");
printf("'%s': ", element->key);
printf("'%s'", element->value);
nodes++;
element = element->next;
}
}
}
printf("}\n");
}
