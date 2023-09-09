#include "hash_tables.h"
/**
 * shash_table_create - ..
 * @size: size
 * Return: a shash_table_t struct
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(shash_table_t));
	if (!a)
		return (NULL);

	a->size = size;
	a->array = malloc(sizeof(shash_node_t *) * size);
	if (!(a->array))
	{
		free(a);
		return (NULL);
	}

	for (; i < size; i++)
		a->array[i] = NULL;

	a->shead = NULL;
	a->stail = NULL;
	return (a);
}
