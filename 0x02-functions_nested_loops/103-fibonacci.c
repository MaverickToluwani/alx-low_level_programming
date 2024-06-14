#include <stdio.h>

/**
 * fib_generator - print the first n Fibonacci numbers
 */
void fib_generator(void)
{
	long int i, start, next, cur, n, sum;

	sum = 0;
	start = 1;
	next = 2;
	n = 32;
	for (i = 0; i <= n; i++)
	{
		cur = start + next;
		if (start % 2 == 0)
			sum = sum + start;
		start = next;
		next = cur;
	}
	printf("%ld\n", sum);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fib_generator();
	return (0);
}
