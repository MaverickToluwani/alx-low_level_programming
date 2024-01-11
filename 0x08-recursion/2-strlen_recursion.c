#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The char who's lenght is to be computed
 * Return: returns lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
