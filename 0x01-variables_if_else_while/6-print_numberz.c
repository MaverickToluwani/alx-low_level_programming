#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all single digit numbers of base 10 starting from 0
 * putchar can only be used for this task
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 1;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
