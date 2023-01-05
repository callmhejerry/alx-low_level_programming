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

	size = ht->size;
	dupValue = strdup(value);
	index = key_index((unsigned char *)key, size);

	/*create the hash node to be stored in the hash table*/
	hashNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (hashNode == NULL)
		return (0);
	hashNode->key = strdup(key);
	/*strcpy(hashNode->key, key);*/
	hashNode->value = dupValue;
	hashNode->next = NULL;

	/*check if empty*/
	if (ht->array[index] != NULL)
	{
		add_node(ht->array[index], hashNode);
	}
	else
		ht->array[index] = hashNode;
	return (1);
}


/**
 * add_node - A function that adds a node to the end of a linked list
 * @head: the pointer to the first node
 * @node: the node to add the list
 * Return: void
 */
void add_node(hash_node_t *head, hash_node_t *node)
{
	hash_node_t *temp, *prev;
	char *key;

	temp = head;
	key = node->key;
	prev = NULL;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			if (prev == NULL)
			{
				node->next = head->next;
				head = node;
			}
			else
			{
				node->next = temp->next;
				prev->next = node;
			}
			free(temp->key);
			free(temp->value);
			break;
		}
		if (temp->next == NULL)
		{
			temp->next = node;
			break;
		}
		prev = temp;
		temp = temp->next;
	}
}
