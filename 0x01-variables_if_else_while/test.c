#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char h = 'a';

        while (h <= 'z')
        {
                putchar(h);
		h++;
        }

        putchar('\n');
        return (0);
}

