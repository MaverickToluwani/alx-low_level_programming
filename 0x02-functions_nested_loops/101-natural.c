#include <stdio.h>

/**
 * sum_multiple_3_5 - computes the sum of multiples of 3 and 5 below n numbers
 * @n: upper bound of number to be iterated through
 * Return: sum of multiples of 3 and 5
 */
int sum_multiple_3_5(int n)
{
	int counter, sum = 0;

	for (counter = 0; counter < n; counter++)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
			sum = sum + counter;
	}
	return (sum);
}
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int res;

	res = sum_multiple_3_5(1024);
	printf("%d\n", res);
	return (0);
}
