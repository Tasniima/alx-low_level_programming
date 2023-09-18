#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src
 * @dest: Chat type string
 * @src: Chat type string
 * Description: Copy the strig pointed to by pointer `src` to
 *	the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = scr[i];
	} while (scr[i] != '\0');

	return (dest);
}
