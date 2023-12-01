#include "hash_tables.h"
/**
 * hash_table_print - func that prints a hash table
 * @ht: Ptr to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *elem;
	unsigned long int u;
	unsigned char v;

	v = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (u = 0; u < ht->size; u++)
	{
		if (ht->array[u] != NULL)
		{
			if (v == 1)
				printf(", ");

			elem = ht->array[u];
			while (elem != NULL)
			{
				printf("'%s': '%s'", elem->key, elem->value);
				elem = elem->next;
				if (elem != NULL)
					printf(", ");
			}
			v = 1;
		}
	}
	printf("}\n");
}
