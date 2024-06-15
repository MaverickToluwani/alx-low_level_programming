#include <stdio.h>
#include "main.h"

/**
 * rev_string -  prints a string, in reverse
 * @s: string to be printed in reverse
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char cpy;

	while (s[i] != '\0')
		i++;
	i--;

	for (j = 0; j < i / 2; j++)
	{
		cpy = s[j];
		s[j] = s[i];
		s[i--] = cpy;
	}
}
