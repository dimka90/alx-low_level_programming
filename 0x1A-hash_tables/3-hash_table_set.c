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
if (!ht || !key)
	return (0)


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

/*insertion */
if (ht->array[hash] == NULL)
{
ht->array[hash] = node;
return (1);
}
else
{
	ht->array[hash]->next = node;
	return (1);

}
}
