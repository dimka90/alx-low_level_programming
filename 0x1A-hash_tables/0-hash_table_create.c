#include "hash_tables.h"
/**
 * hash_table_t *hash_table_create - a function that create a hash table
 * @size: size of the array to create
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}

hash_table->array = malloc(sizeof(hash_table_t *) * size);

	if (hash_table->array == 0)
	{
	return (NULL);
	}
hash_table->size = size;
return (hash_table);

}
