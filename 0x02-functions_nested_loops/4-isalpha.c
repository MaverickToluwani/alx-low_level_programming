#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@c: the character to be checked
 * Return: 1 if c is lowercase or uppercase
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
