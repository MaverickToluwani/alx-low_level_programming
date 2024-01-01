#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';
	char Uppalp = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (Uppalp <= 'Z')
	{
		putchar(Uppalp);
		Uppalp++;
	}
	putchar('\n');
	return (0);
}
