#include "hash_tables.h"
/**
 * key_index - a function that returns the index of an node
 * @key: key to create the hash function
 * @size: size of the hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

unsigned long int hash =  hash_djb2(key) % size;
return (hash);
}
