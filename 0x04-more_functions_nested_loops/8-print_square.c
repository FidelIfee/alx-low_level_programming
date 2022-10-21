#include "main.h"

/**
 * print_square - function that prints square
 * @size: parameter
 */

void print_square(int size)
{
	int a = 0, b;

	if (size > 0)
	{
		for (; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
