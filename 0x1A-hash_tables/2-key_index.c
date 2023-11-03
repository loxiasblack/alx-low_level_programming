#include "hash_tables.h"
/**
 * key_index - creat a function that hash the key
 * and return the index of the value
 * @key: key of my node
 * @size: the size of my hash table
 * Return: the index of my key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int i;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (0);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	index = hash_djb2((unsigned char *)key) % new_table->size;

	return (index);
}
