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
 * cmp - A function that compares two strings
 * @str1: first string
 * @str2: second string
 * Return: 1 if the first string is bigger than the second string,
 * return 0 otherwise
 */
int cmp(char *str1, char *str2)
{
	int i;

	while (str1[i] != "\0" && str2[i] != "\0")
	{
		if (str1[i] < str2[i])
			return (1);
		i++;
	}
	if (str1[i] == NULL)
		return (1);
	else
		return (0);
}

void sortedInsert(shash_node_t *head, shash_node_t *node)
{
	shash_node_t *headcpy, *prev, *now, *next;

	headcpy = head;
	now = head;
	next = head->snext;

	while (now != NULL)
	{
		if (cmp(head->key, node->key) == 1)
		{
			node->snext = head;
			head = node;
			return ;
		}
		if (next != NULL)
		{
			if (cmp(node->key, now->key) == 1 && cmp(node->key, next->key) == 0)
			{
				node->snext = next;
				node->sprev = now;
				now->snext = node;
				return ;
			}
		}
		else
		{
			now->snext = node;
			node->sprev = now;
			return ;
		}
		now = next;
		if (next != NULL)
			next = next->snext;
	}
}

/**
 * shash_table_set - A function that inserts a key/value pair
 * into a hash table
 * @ht: the pointer to the hash table
 * @key: the key to be stored
 * @value: the value associated to the stored key
 * Return: 1 on success , 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;
	char *dupKey, *dupValue;
	unsigned long int index;
	int sort;

	node = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	dupKey = strdup(key);
	dupValue = strdup(value);
	index = key_index(key);
	sort = 0;
	/* set up the node*/
	node->key = dupkey;
	node->value = dupValue;
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;
	/*add node to the linked list in the array*/
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		if (add_node(ht->array[index], dupKey, dupValue) == 0)
		{
			node->next = ht->array[index];
			ht->array[index] = node;
			sort = 1;
		}
	}
	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail= node;
	}
	else
		if (sort == 1)
			sortedInsert(ht->shead, node);
	return (1);
}
