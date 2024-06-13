#include "main.h"

/**
 * _islower - function returns 1 if letter is lowercase and 0 if it not
 * @c: character to be checked
 * Return: 1 for lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
