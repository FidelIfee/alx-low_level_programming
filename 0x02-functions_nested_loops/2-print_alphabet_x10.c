#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times in lowercase
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i++ <= 9)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		_putchar(j);
	_putchar("\n");
}
