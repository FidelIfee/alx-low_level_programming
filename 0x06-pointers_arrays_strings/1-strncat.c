#include "main.h"
/**
 *_strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, a;
/* a is a counter for  n bytes of src to be concatenated */
/* length = length of destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (a = 0; j < n && src[a] != '\0'; a++, length++)
	{
		dest[length] = src[a];
	}
	dest[length] = '\0';
	return (dest);
}
