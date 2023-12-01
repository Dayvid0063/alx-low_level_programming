#include "hash_tables.h"
/**
 * hash_table_create -  func creates a hash table
 * @size: Size
 *
 * Return: Ptr to the newly created hash table or NULL if otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int u;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (u = 0; u < size; u++)
		ht->array[u] = NULL;

	return (ht);
}
