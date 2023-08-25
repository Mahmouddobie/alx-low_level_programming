#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n :the number of bytes from the src to the dest
 * Return: dest (success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < dest[i];)
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + n] = src[j];

	return (dest);
}
