#include "hash_tables.h"

/**
 * hash_djb2 - Hash function to implement the djb2 algorithm
 * @str: The string to hash_t
 *
 * Return: The calculated hash_t
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_t;
	int c;

	hash_t = 5381;
	while ((c = *str++))
		hash_t = ((hash_t << 5) + hash_t) + c; /* hash_t * 33 + c */

	return (hash_t);
}
