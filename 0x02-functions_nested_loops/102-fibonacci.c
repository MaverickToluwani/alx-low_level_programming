#include <stdio.h>

/**
 * fib_generator - print the first n Fibonacci numbers
 * @n: number of fibanacci numbers to be printed
 */
void fib_generator(int n)
{
	long long int i, start, next, cur;

	start = 1;
	next = 2;
	printf("%lld, %lld, ", start, next);
	for (i = 0; i <= n; i++)
	{
		cur = start + next;
		printf("%lld", cur);
		if (i != n)
			printf(", ");
		start = next;
		next = cur;
	}
	printf("\n");
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fib_generator(50);
	return (0);
}
