#include <stdio.h>
#imclude "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a pointer to count the string length
 * Return: int i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
