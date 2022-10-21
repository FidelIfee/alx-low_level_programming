#include "main.h"

/**
 * more_numbers - function that prints ten times the numbers
 */

void more_numbers(void)
{
	int a, b;

	a = 0;

	while (a < 10)
	{
		for (a = 0; a < 15; a++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + 48);
			}
			_putchar((b % 10) + 48);
		}
		_putchar('\n');

		a++;
	}
}
