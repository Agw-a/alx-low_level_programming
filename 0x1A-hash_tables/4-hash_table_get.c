#include "hash_tables.h"

/**
 * hash_table_get-retrieves a value associated with a key.
 * @ht:poimter to hash table
 * @key:key
 * Return:value associated with the element,
 * NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if ((!key || !key[0]) || (!ht || !ht->array))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
	{
		return (NULL);
	}
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp((const char *)key, tmp->key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
