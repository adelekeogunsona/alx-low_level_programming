#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_c;
	unsigned long int ind, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_c = strdup(value);
	if (value_c == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	for (a = ind; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = value_c;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_c);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_c;
	new->next = ht->array[ind];
	ht->array[ind] = new;

	return (1);
}
