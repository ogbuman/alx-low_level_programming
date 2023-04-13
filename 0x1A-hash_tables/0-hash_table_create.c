#include hash_tables.h

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
README.md hash_table_t *ht;
README.md unsigned long int i;

README.md ht = malloc(sizeof(hash_table_t));
README.md if (ht == NULL)
README.md README.md return (NULL);

README.md ht->size = size;
README.md ht->array = malloc(sizeof(hash_node_t *) * size);
README.md if (ht->array == NULL)
README.md README.md return (NULL);
README.md for (i = 0; i < size; i++)
README.md README.md ht->array[i] = NULL;

README.md return (ht);
}
