#include "main.h"

/**
 * _islower - function to check if character is lowercase
 * @c: checks input of function
 *
 * Return: 1 IF `C` is lowercase other always 0 (success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
