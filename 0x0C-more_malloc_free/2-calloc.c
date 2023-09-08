#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *sh;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	sh = malloc(nmemb * size);
	if (sh == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		sh[i] = 0;
	return (sh);
}
