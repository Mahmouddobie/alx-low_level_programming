#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	ptr = malloc(sizeof(char) * (l1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; i < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
