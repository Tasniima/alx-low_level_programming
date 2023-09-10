#include <stdio.h>


/**
 * main - Entry point
 * Description: print all alphabet letters.
 * Return: Always 0 (success)
*/

int main(void)
{
	int count;

	for (count = 'a', count <= 'z', count++)
	putchar(count);
	for (count = 'A', count <= 'Z', count++)
	putchar(count);
	putchar('\n');
}
