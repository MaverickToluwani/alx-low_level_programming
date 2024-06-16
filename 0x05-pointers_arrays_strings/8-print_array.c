#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * The numbers should be displayed in the same order
 * as they are stored in the array
 * @a: the array
 * @n: number of elements from the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");

}
