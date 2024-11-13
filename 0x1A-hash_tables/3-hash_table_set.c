#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the hash table where key/value pair is updated or added
 * @key: the key(string) to update or add in the hash table
 * @value: the value associated with the key
 *
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
char *dup_value;
unsigned long int index;
hash_node_t *node, *new_node;

if (!ht || !key || !*key || !value)
return (0);

dup_value = strdup(value);
if (!dup_value)
return (0);

index = key_index((const unsigned char *)key, ht->size);

node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = dup_value;
return (1);
}
node = node->next;
}

new_node = malloc(sizeof(hash_node_t));
if (!new_node)
{
free(dup_value);
return (0);
}

new_node->key = strdup(key);
new_node->value = dup_value;
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
