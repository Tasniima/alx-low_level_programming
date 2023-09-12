#include "main.h"

/**
 * Print_alphabet - Make the alphabet
 *
 * Return: 1 if lowercase and 0 for otherwise
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}
