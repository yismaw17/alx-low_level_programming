#include "main.h"

/**
 * _strncat - concatenate strings, defining the size of second string.
 *  @dest: string with concatenation
 *  @src: string to be concatenated
 *   @n: size of second string
 *   Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (!(*(src + j) == '\0' || j == n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
