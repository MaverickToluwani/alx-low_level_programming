#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int x, y, res;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			res = x * y;
			if (y == 0)
			{
				_putchar(res + '0');
			}
			if (res < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
