#include "main.h"
#include <stdio.h>

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n, count = 0;

	while (str[count] != '\0')
		count++;

	if (count % 2 == 0)
		n = count / 2;
	else
		n = (count - 1) / 2;

	while (n < count)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
