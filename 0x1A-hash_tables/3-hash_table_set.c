#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - A function that adds an element to the hash table
 * @ht: the hash table to be updated
 * @key: is the key. key can not be an empty string
 * @value: value is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	char *dupValue;
	hash_node_t *hashNode;

	if (key == NULL || strlen(key) == 0)
	{
		return (0);
	}
	if (value == NULL || ht == NULL)
		return (0);

	size = ht->size;
	dupValue = strdup(value);
	index = key_index((unsigned char *)key, size);

	/*create the hash node to be stored in the hash table*/
	hashNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (hashNode == NULL)
		return (0);
	hashNode->key = strdup(key);
	hashNode->value = dupValue;
	hashNode->next = NULL;

	/*check if empty*/
	if (ht->array[index] != NULL)
	{
		if (add_node(ht->array[index], key, dupValue) == 1)
		{
			/*free(hashNode->key);*/
			/*free(hashNode);*/
			return (1);
		}
		hashNode->next = ht->array[index];
		ht->array[index] = hashNode;
	}
	else
		ht->array[index] = hashNode;
	return (1);
}


/**
 * add_node - A function that searches the linked list to see
 * if the key already exits and update the value
 *
 * @head: the pointer to the first node
 * @key: the key to search for
 * @value: the value to update the node with
 * Return: 1 if successful, 0 otherwise
 */
int add_node(hash_node_t *head, const char *key, char *value)
{
	hash_node_t *temp;

	temp = head;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/*free(temp->value);*/
			temp->value = value;
			return (1);
		}
		temp = temp->next;
	}
	return (0);
}
