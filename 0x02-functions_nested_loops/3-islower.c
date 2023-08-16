#include "main.h"

/**
 * _islower - function to check if character is lowercase
 * @c: checks input of function
 *
 * Return: 1 IF `C` is lowercase other always 0 (success)
*/

int _islower(int c)
{
	int let;

	if (let >= 97 && let <= 122)
		return (1);

	return (0);
}
