#include "hash_tables.h"

/**
 *key_index - gives you the index of a key
 *@key: the key
 *@size: size of the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int long_hash;
unsigned long int index;

if (size == 0)
return (0);

long_hash = hash_djb2(key);
index = long_hash % size;

return (index);
}
