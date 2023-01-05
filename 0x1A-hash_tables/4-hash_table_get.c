#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - A Function that retrieves a value
 * associated with a key
 * @ht: the hashtable to retrieve value from
 * @key: the key you are looking for
 * Return: The value associated with the element or NULL
 * if the key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index, size;
	hash_node_t *hashNode;
	
	size = ht->size;
	index = key_index((unsigned char *)key, size);

	if (ht->array[index] == NULL)
		return (NULL);

	hashNode = ht->array[index];
	if (strcmp(hashNode->key, key) == 0)
		value = hashNode->value;
	else
	{
		if (strcmp(ht->array[0]->key, key) == 0)
			value = ht->array[0]->value;
		else
			value = NULL;
	}

	return (value);
}
