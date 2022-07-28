#include "main.h"

/**
 * malloc_checked - allocate memory with malloc
 *
 * @b: size to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
