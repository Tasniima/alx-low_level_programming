#include "main.h"

/**
 * _strcat - function that concatenates
 *		two string.
 * @dest: Pointer to destination input
 * @src: Pointer to source input
 *
 * Return: Pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)

		dest[c++] = src[c2];

	return (dest);
}
