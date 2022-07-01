#include "hash_tables.h"

/**
 * hash_table_create-creates a hash table.
 *
 * @size:the size of the array
 * Return:a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);
	if (size == NULL)
		return (h_table);


	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!h_table->array)
	{
		return (NULL);
	}
	h_table->size = size;
	return (h_table);
}
