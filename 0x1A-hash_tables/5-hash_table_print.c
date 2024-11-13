#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table in terms of key/value
 *                    in their order in the array of hash table,
 *                    prints nothing if `ht` is NULL
 * @ht: pointer to the hash_table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;
int checked = 1;

if (ht == NULL)
return;

printf("{");

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];

while (node)
{
if (!checked)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
checked = 0;
node = node->next;
}

}
printf("}\n");
}
