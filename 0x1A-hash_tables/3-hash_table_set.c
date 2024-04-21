#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash_table
 * @ht: hash tabel you want to add or update the key/value
 * @key: Variable tobe added to the hash table
 * @value: variable associated with the key
 * Return: 1 on succes, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size = ht->size;
	unsigned long int index;
	hash_node_t *array_ele;
	hash_node_t *node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);
	node->key = (char *)malloc(strlen(key) + 1);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = (char *)malloc(strlen(value) + 1);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	if ((strcmp(key, "") == 0) || key == NULL)
		return (0);
	strcpy(node->key, key);
	strcpy(node->value, value);
	index = key_index((unsigned char *)node->key, size);
	array_ele = ht->array[index];
	if (array_ele == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			while (array_ele->next != NULL)
				array_ele = array_ele->next;
			array_ele->next = node;
			return (1);
		}
	}
}
