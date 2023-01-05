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

	if (ht == NULL || key == NULL)
		return (NULL);

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	if (ht->array[index] == NULL)
		return (NULL);

	hashNode = ht->array[index];
	value = search_list(hashNode, key);
	return (value);
}

/**
 * search_list - A function that searches a linkedlist
 * for a key
 * @head: the start of the linkedlist
 * @key: the key to search for
 * Return: the value associated with the key
 */
char *search_list(hash_node_t *head, const char *key)
{
	hash_node_t *temp;
	char *value;

	temp = head;
	value = NULL;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			value = temp->value;
			break;
		}
		temp = temp->next;
	}
	return (value);
}
