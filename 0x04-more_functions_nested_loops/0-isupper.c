#include "main.h"

/**
 * _isupper - check if is c uppercase
 *
 * @c: Char to check
 *
 * Return: 1 if its upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
