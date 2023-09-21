#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenate two strings
 * using at most n bytes from src
 * @dest: Input value
 * @n: Input value
 * @src: Input value
 *
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
