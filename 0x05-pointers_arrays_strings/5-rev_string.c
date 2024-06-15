#include <stdio.h>
#include "main.h"

/**
 * rev_string -  prints a string, in reverse
 * @s: string to be printed in reverse
 */
void rev_string(char *s)
{
	int i = 0, j, i_ = 0;
	char cpy;

	while (s[i] != '\0')
		i++;
	i_ = i - 1;

	for (j = 0; j < i / 2; j++)
	{
		cpy = s[j];
		s[j] = s[i_];
		s[i_--] = cpy;
	}
}
