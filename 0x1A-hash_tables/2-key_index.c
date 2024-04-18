#include "hash_tables.h"

/**
 * key_index - Generates the hash table index of a key
 * @key: variable tobe inserted in the hash table
 * @size: size of hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2 = hash_djb2(key);

	return (djb2 % size);
}
