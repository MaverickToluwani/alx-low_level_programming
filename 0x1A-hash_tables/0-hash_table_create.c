#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j;
	hash_table_t *table = (hash_table_t*)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
        	perror("Failure creating table");
        	return NULL;
	}
    	table -> size = size;
   	table -> array = (hash_node_t**)calloc(table->size, sizeof(hash_node_t*));
	if (table->array == NULL){
		perror("Memory allocation failed");
		return NULL;
	}

   	for (j = 0; j < table->size; j++)
    	{
        	table -> array[j] = NULL;
    	}

    	return (table);
}
