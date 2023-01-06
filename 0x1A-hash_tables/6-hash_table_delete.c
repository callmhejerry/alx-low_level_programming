#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 * @ht: the hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *next, *prev;

	for (idx = 0; idx < ht->size; idx++)
	{
		prev = ht->array[idx];
		if (prev != NULL)
		{
			next = prev->next;
			while (prev != NULL)
			{
				free(prev->key);
				free(prev->value);
				free(prev);
				prev = next;
				if (next != NULL)
					next = next->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}						
