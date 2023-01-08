#include "hash_tables.h"

/**
 * shash_table_create - A function that creates a Hash table
 * @size: the size of the array in the hash table
 * Return: A pointer to the created hash table or Null if
 * an error occured
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashTable;
	shash_node_t **array;
	unsigned long int i;

	hashTable = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (hashTable == NULL)
		return (NULL);
	array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
	{
		free(hash_Table);
		return (NULL);
	}

	/* setting all element in the array to NULL*/
	for (i = 0; i < size; i++)
		array[i] = NULL;
	hashTable->size = size;
	hashTable->array = array;
	hashTable->shead = NULL;
	hashTable->stail = NULL;

	return (hashTable);
}

/**
 * shash_table_set - A function that inserts a key/value pair
 * into a hash table
 * @ht: the pointer to the hash table
 * @key: the key to be stored
 * @value: the value associated to the stored key
 * Return: 1 on success , 0 otherwise
 */

