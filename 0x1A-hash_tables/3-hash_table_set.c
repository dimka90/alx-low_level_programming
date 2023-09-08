
#include "hash_tables.h"
hash_node_t *new_node(hash_node_t *old);
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *node = NULL;
hash_node_t *newNode = NULL;
	unsigned long int index;

	if (!key || !ht)
		return (0);

	index = hash_djb2((unsigned char *) key) % ht->size;
	node = ht->array[index];
	/* update key */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}

