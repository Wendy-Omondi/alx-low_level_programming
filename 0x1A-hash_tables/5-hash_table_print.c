#include "hash_tables.h"

/**
 *hash_table_print - prints hash table
 *@ht: the hash table
 *Return: ht
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
unsigned int cf;

cf = 0;
if (ht == NULL)
return;
printf("{");
if (ht->array == NULL)
{
printf("}\n");
return;
}
for (i = 0; i < ht->size; i++)
while (ht->array[i] != NULL)
{
if (cf == 1)
printf(", ");
printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
cf = 1;
ht->array[i] = ((ht->array[i])->next);
}
printf("}\n");
}
