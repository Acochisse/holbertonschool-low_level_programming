#include "hash_tables.h"
/**
 * key_index - returns the index of key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index where its stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
	return (hash_djb2(key) % size);
}