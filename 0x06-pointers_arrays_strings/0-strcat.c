#include "main.h"
/**
 *_strcat - function that concatenates two strings.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *
 *Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int length, a; /* a will hold the length of the source */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (a = 0; src[a] != '\0'; a++, length++)
	{
		dest[length] = src[a];
	}
	dest[length] = '\0';
	return (dest);
}
