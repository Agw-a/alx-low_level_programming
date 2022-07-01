#include "hash_tables.h"

/**
 * hash_table_set-adds an element to the hash table
 * @ht:hash table you want to add or update the key/value to
 * @key:key
 * @value:value associated with the key
 * Return:1 on success 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int idx;
	hash_node_t *tmp;
	char *d_value;

	if (!ht || !key || !value || !strlen(key) || !ht->array || !ht->size)
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	for (tmp = ht->array[idx]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			d_value = strdup(value);
			if (!d_value)
				return (0);
			free(tmp->value);
			tmp->value = d_value;
			return (1);
		}
	}
	tmp = create_node(key, value);
	if (!tmp)
		return (0);

	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;
	return (1);
}
