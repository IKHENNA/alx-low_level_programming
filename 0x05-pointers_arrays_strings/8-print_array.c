#include <stdio.h>
#include "main.h"
/**
 *main - prints n elements of an array.
 *followed by a newline.
 *@a: array to print.
 *@n: number of elements to print.
 */

void print_array(int *a, int n)

{

	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)

			printf("%d", a[i]);

		else

			printf(", %d", a[i]);
	}

	printf("\n");
}
