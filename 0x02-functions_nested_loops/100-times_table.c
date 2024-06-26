#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: max times table value
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (j == 0)
				_putchar(res + '0');
			else if (j != 0 && res <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res > 9 && res <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res > 99 && res < 999)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 100) + '0');
				_putchar(((res % 100) / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
