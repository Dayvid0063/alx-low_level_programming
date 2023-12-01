#include "hash_tables.h"

/**
 * hash_table_get - func retrieves a value associated with a key
 * @ht: Ptr to hash table
 * @key: Key
 *
 * Return: Value associated with elem,or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *u;
	unsigned long int dir;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	dir = key_index((const unsigned char *)key, ht->size);
	if (dir >= ht->size)
		return (NULL);

	u = ht->array[dir];
	while (u && strcmp(u->key, key) != 0)
		u = u->next;

	return ((u == NULL) ? NULL : u->value);
}
