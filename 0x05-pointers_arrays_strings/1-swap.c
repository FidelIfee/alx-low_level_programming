#include <stdio.h>
#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: a pointer dereference to change the value of the variable a
 * @b: a pointer dereference to change the value of the variable b
 * int c: assigns the address of the variable a to c
 * Return 0 success
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
