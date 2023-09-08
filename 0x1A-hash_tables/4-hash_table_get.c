#include "hash_tables.h"
/**
 *hash_table_get - a function that retrieves a value associated with a key
 *@ht: hash table struct
 *@key: key associated with a value
 *Return: value of a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *tempt = NULL;
/* Getting the hash value from the hash function */
unsigned long int keyindex = hash_djb2((unsigned char *) key) % ht->size;
if (!ht || !key || key[0] == '\0')
	return (NULL);

tempt = ht->array[keyindex];
while (tempt)
{
	/* Compararing the value of the key with the one receive */
	if (strcmp(tempt->key, key) == 0)
	{
		return (tempt->value);
	}
	tempt = tempt->next;
}
return (NULL);
}
