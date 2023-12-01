#include "hash_tables.h"
/**
 * hash_table_delete - func that deletes a hash table
 * @ht: Ptr to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head;
	hash_node_t *elem;
	hash_node_t *v;
	unsigned long int u;

	head = ht;

	for (u = 0; u < ht->size; u++)
	{
		if (ht->array[u] != NULL)
		{
			elem = ht->array[u];
			while (elem != NULL)
			{
				v = elem->next;
				free(elem->key);
				free(elem->value);
				free(elem);
				elem = v;
			}
		}
	}
	free(head->array);
	free(head);
}
