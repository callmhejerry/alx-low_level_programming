#include "hash_tables.h"

/**
 * hash_table_print - A function that prints
 * a hash table
 * @ht: the hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *temp;
	int set = 0;

	if (ht == NULL)
		return;

	printf("{");
	/*looping through the array in the hash_table*/
	for (idx = 0; idx < ht->size; idx++)
	{
		if (set != 0 && ht->array[idx] != NULL)
			printf(", ");
		if (ht->array[idx] != NULL)
		{
			set = 1;
			temp = ht->array[idx];
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (temp->next != NULL)
					printf(", ");
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
