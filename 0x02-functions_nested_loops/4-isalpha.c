#include <stdio.h>

/**
 * _isalpha - checks if a character is an alphabet
 * @c: character to be checked
 * Return: 1 if c is a character, returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
