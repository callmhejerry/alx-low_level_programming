#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - A function that creates a hash table
 * @size: the size of the array to be created
 * Return: A pointer to the hash_table structure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int i;

	hashTable = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (hashTable->array == NULL)
	{
		free(hashTable)
		return (NULL);
	}
	/*initialize all element of the array to NULL*/
	for (i = 0; i < size; i++)
		hashTable->array[i] = NULL;
	return (hashTable);
}
