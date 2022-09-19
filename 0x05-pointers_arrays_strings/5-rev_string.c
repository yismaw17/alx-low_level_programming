#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 * 
 * @s: this is the pointer that point to a string
 */


void rev_string(char *s)
{
	int i, j;
	char str[1000];

	i = 0;

	while (*(s + i) != 0)
	{
		str[i] = *(s + i);
		i++;
	}

	j = i - 1;
	i = 0;

	while (j >= 0)
	{
		*(s + j) = str[i];
		j--;
		i++;
	}
}

