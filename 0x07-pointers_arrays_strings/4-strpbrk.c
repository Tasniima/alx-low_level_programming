#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, h;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		h = 0;
		while (s[h] != '\0')
		{
			if (accept[h] == s[i])
			{
				p = &s[i];
				return (p);
			}
			h++;
		}
		i++;

	}

	return (0);
}
