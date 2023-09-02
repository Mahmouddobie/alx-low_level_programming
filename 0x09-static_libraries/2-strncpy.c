#include "main.h"

/**
 * _strncpy - copies at most an input number.
 * @dest: the buffer storing the string copy.
 * @src: the source string
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: a pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
