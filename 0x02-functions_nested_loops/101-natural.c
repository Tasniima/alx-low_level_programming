#include "main.h"

/**
 * main - Entry point
 *
 * Description: computes the sum of all multiples
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int sum, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
