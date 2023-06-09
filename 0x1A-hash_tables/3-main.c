#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int status = 9;

	ht = hash_table_create(1024);
	status = hash_table_set(ht, "hetairas", "cool");
	status = hash_table_set(ht, "mentioner", "hello");

	hash_table_delete(ht);

	printf("status: %d\n", status);
	return (EXIT_SUCCESS);
}
