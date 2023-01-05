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

	hashTable = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (hashTable->array == NULL)
		return (NULL);
	return (hashTable);
}
