#include "hash_tables.h"

/**
 *key_index - gives you the index of a key
 *@key: the key
 *@size: size of the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned int h;
unsigned int i;

h = 0;
i = 0;

while (key && key[i])
{
h = h + key[i] % size;
i++;
}

return (h);
}
