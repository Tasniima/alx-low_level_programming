#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes
 * Return: Unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, h;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (h = 0; accept[h] != s[i]; h++)
		{
			if (accept[h] == '\0')
				return (i);
		}
	}
	return (i);
}
