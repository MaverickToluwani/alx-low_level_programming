#include <stdio.h>
#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: string to be priinted in reverse
 */
void print_rev(char *s)
{
	int i = 0, counter = 0;

	while (s[i] != '\0')
	{
		i++;
		counter++;
	}

	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar('\n');

}
