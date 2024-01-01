#include <stdio.h>

/**
 * main - Entry point
 *
 * printf: Displays numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
