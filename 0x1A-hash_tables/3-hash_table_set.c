#include "hash_tables.h"
/**
 * hash_table_set - func adds an element to the hash table
 * @ht: Ptr to hash table
 * @key: Key
 * @value: Value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *val_dup;
	unsigned long int dir;
	unsigned long int u;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_dup = strdup(value);
	if (val_dup == NULL)
		return (0);

	dir = key_index((const unsigned char *)key, ht->size);
	for (u = dir; ht->array[u]; u++)
	{
		if (strcmp(ht->array[u]->key, key) == 0)
		{
			free(ht->array[u]->value);
			ht->array[u]->value = val_dup;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_dup);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val_dup;
	new->next = ht->array[dir];
	ht->array[dir] = new;

	return (1);
}
