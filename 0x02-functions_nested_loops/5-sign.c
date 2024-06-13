#include <stdio.h>
#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: numbers whose sign is to be printed
 * Return: 1 for +ve number, -1 for -ve number and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
