#include <stdio.h>

/**
 * main -entry point
 * Description: Prints _putchar using prototype
 * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		putchar(str[ch]);
	putchar('\n');

	return (0);
}
