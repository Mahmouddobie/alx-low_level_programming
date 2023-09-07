#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory by using malloc
 *
 * @b: allocated memory
 *
 * Return: a pointer to allocated memory (@b)
*/
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == 0)
	{
		exit(98);
	}
	return (i);


}
