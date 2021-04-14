#include "shell.h"

/**
 * _getline - puts input from user into buffer line
 * @fp: buffer for user input
 * Return: buffer with user input
 */
char *_getline(int fd)
{
	char *line;
	ssize_t read;

	line = NULL;
	read = gettline(&line, fd);
	if (read == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

	return (line);
}
