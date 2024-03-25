#include "main.h"

/**
 * _abs - Compute the absolute value of an unsigned integer
 * @n : the integer to be checked
 * Return: the absolute value of integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
}
