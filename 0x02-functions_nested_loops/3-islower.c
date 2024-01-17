#include "main.h"

/**
 * _islower - function returns 1 if letter is lowercase and 0 if it not
 * c: character
 * Return: 1 for lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
