#include "main.h"

/**
 * main - Entry point
 * Standard libraries are not to be used
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myVar[] = "_putchar";
	int i = 0;

	while (myVar[i] != '\0')
	{
		_putchar(myVar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
