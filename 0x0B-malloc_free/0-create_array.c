#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  create_array - creates an array of char and initializes it
 *			with a specific char
 *
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
