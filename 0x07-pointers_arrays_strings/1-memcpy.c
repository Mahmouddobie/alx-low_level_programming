#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *		to by @src into that pointed to by @dest
 *
 * @dest: A pointer to the memory area to copy @src into
 * @src: The source buffer to copy characters from
 * @n: The number of bytes to copy from
 *
 * Return: A pointer to the destination buffer. (success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
