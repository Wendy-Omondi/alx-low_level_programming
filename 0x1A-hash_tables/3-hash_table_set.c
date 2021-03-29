#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table
 *@ht: the hash table you want to add or update the key/value to
 *@key: the key and cannot be an empty string
 *@value: the value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int key_i = 0;
char *value_copy = NULL, *key_copy = NULL;
hash_node_t *new_node = NULL, *temp = NULL;

if (!ht || !key || !value)
return (0);
else if (strlen(key) == 0)
return (0);
value_copy = strdup(value);
if (!value_copy)
return (0);
key_copy = strdup(key);
if (!key_copy)
{
free(value_copy);
return (0);
}
new_node = malloc(sizeof(hash_node_t));
if (!new_node)
{
free(key_copy);
free(value_copy);
return (0);
}
new_node->key = key_copy;
new_node->value = value_copy;
new_node->next = NULL;
key_i = key_index((unsigned char *)key, ht->size);

if ((ht->array)[key_i] != NULL)
{
temp = (ht->array)[key_i];
while(temp)
{
if (strcmp(temp->key, key_copy) == 0)
{
free(ht->array[key_i]->value);
ht->array[key_i]->value = value_copy;
free(key_copy);
free(new_node);
return (1);
}
temp = temp->next;
}
temp = (ht->array)[key_i];
new_node->next = temp;
(ht->array)[key_i] = new_node;
}

else
(ht->array)[key_i] = new_node;

return (1);
}
