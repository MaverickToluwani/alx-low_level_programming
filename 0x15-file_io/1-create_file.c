#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - Creates files and sets their permissions
 * @filename: File to be created
 * @text_content: String to write to file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fd;

	fd = fopen(filename, "w");

	if (fd == NULL)
		return (-1);
	fputs(text_content, fd);
	fclose(fd);
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		perror("Error setting file permissions");
		exit(EXIT_FAILURE);
	}
	return (1);
}
