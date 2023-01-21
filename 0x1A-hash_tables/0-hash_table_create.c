#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: NULL if error, a pointer to the new hash table if not
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htab;
	unsigned long int i;

	htab = malloc(sizeof(hash_table_t));
	if (htab == NULL)
		return (NULL);

	htab->size = size;
	htab->array = malloc(sizeof(hash_node_t *) * size);
	if (htab->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		htab->array[i] = NULL;

	return (htab);
}
