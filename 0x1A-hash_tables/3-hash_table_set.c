#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table
 * @key: key yo be hash
 * @ht: hash table
 * @value: value to store
 * Return: 1 for success and 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
size_t keylen = strlen(key) + 1;
size_t valuelen = strlen(value) + 1;
hash_node_t *node = malloc(sizeof(hash_node_t));
unsigned long int hash = hash_djb2((unsigned char *) key) % ht->size;
hash_node_t *indexnode = ht->array[hash];
if (!ht || !key)
	return (0);
while (indexnode != NULL)
{
if (strcmp(indexnode->key, key) == 0)
{
free(indexnode->value);
indexnode->value = malloc(sizeof(char) * keylen);
strcpy(indexnode->value, value);
return (1);
}
indexnode = indexnode->next;
}
if (node == NULL)
	return (0);
node->key = malloc(sizeof(char) * keylen);
if (node->key == NULL)
	return (0);
strcpy(node->key, key);
node->value = malloc(sizeof(char) * valuelen);
if (node->value == NULL)
{
return (0);
}
strcpy(node->value, value);
node->next = ht->array[hash];
ht->array[hash] = node;
return (1);
}
