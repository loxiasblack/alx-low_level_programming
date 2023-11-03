#include "hash_tables.h"
/**
 * hash_table_delete - delete my hash table
 * @ht: the hash table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int long index = 0;
	hash_node_t *temp = NULL;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp->next;
		}
	}
	free(ht);
}
