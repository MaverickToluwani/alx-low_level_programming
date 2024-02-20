#include "main.h"

/**
 * read_textfile - Reads characters from a file
 * @filename: File to be read
 * @letters: Number of letters to be read
 * Return: count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char c;
	int count;
	size_t i;

	count = 0;
	i = 0;
	fd = fopen(filename, "r");
	if (fd == NULL)
	{
		printf("Error! cannot open file");
		exit(1);
	}
	while (i < letters)
	{
		c = fgetc(fd);
		if (c == EOF)
			break;
		printf("%c", c);
		count++;
		i++;
	}
	fclose(fd);
	return (count);
}
