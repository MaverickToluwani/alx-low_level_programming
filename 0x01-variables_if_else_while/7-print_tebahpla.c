#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char L_alp = 'z';

	while (L_alp >= 'a')
	{
		L_alp--;
		putchar(L_alp);
	}
	putchar('\n');
	return (0);
}
