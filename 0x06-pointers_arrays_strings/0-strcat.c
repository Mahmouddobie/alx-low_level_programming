#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings,
 * @dest: string append to
 * @src: string add
 *
 * Return: the pointer to the result
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; i < dest[i]; )
		i++;
	for (j = 0; j < src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
