#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints chessboard
 * @a: rows
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, h;

	for (i = 0; i < 8; i++)
	{
		for (h = 0; h < 8; h++)
		{
			_putchar(a[i][h]);
		}
		_putchar('\n');
	}
}
