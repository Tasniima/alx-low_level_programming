#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a quote using write function
 *	Size_t write(int fd, const void *buf, size_t count):
 * Return: Always 1 (error).
*/

int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
