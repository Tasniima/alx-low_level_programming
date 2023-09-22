#include "main.h"

/**
 * _strcat - function that copies a string
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * Description: Appends the src string to the dest string
 * Return: @dest
 */ 

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dust array*/
	while (dest[c])
		c++;

	/*iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}
