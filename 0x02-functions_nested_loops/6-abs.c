#include "main.h"
#include <stdio.h>

/**
 * _abs - prints absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: the absolute value of the integer.
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);

}
