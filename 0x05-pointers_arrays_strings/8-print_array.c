#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: pointer parameter
 * @n: integer variable
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; 1 < n; i++)
	{
		printf("%d", *(a + 1));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
