#include "shell.h"
/**
 * readline - function to read a line
 * @buffer: buffer
 * Return: 0 (int)
 */
int readline(char *buffer)
{
	ssize_t size = 0;
	size_t n = BUFFER_SIZE;

	size = getline(&buffer, &n, stdin);
	/* stoping prompt cycle by Cntrl+D */
	if (size == EOF)
	{
		return (-1);
	}
	return (0);
}
