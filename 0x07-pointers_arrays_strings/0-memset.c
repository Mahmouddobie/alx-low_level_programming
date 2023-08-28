#include "main.h"

/**
 * _memset - filles the memory with constant file
 *
 * @s: pointer to memory area to be filled
 * @b: the character to fill the memory area with.
 * @n: the number of bytes to be filled.
 *
 * Return: a pointer to the filled memory area. (success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
