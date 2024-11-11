#include "HASH_TABLES_H"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the array
 * Return: pointer to the newly created hash table, or NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t))
    table->size = size
    table->count = 0
    table->itens = (ht_item**)calloc(table->size, sizeof(ht_item*))

    for (int i = 0; i < table->size; i++)
        table->items[i] = NULL

    return table
}
