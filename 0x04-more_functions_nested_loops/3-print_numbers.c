#include "main.h"

/**
 * print_numbers - Print 0 -9 using _putchar
 *		only using twics
 *
 * Return: Always 0 (succes)
 */

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
