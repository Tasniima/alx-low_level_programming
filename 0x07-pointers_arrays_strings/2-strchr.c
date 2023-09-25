#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put a constant
 * @c: constant
 * Return: Pointer to s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
