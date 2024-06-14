#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: start of numbers to be printed
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", n);
	}
	printf("\n");

}
