#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ shouldnbe printed
 */

void print_line(int n)

{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
			_putchar('_');
	}

	_putchar('\n');
}
