#include "hash_tables.h"
/**
 *hash_table_print - pirnt a hash table value
 *@ht:hash table to print
 *The function prints the key and value in form of a dictionary in python
 * e.g - {'name':'Dimka', 'Gender':'Male'}
 *Return : None
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
unsigned long int flag = 0;
hash_node_t  *tempt = NULL;

if (ht == NULL)
{
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
/* accessing each key in the hash table */
tempt = ht->array[i];

while (tempt != NULL)
{

if (flag == 1)
	printf(",");
/* flag is used to keep track of when to print comma(') */
flag = 1;
printf("'%s' : '%s' ", tempt->key, tempt->value);

tempt = tempt->next;
}
}
printf("}\n");
}
