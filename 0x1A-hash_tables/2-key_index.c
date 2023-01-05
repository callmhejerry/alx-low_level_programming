#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key
 * @key: the key to find the index of
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair shold be
 * stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hashedKey;

	hashedKey = hash_djb2(key);
	index = hashedKey % size;

	return (index);
}
