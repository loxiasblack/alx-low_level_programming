#include "hash_tables.h"
/**
 * hash_table_get - get value of the key
 * @ht: the hash table where my value is hashed
 * @key: the to search in my hash table
 * Return: the value or Null if failed
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
