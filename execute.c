#include "shell.h"
/**
 * _execve - executable function.
 * @argv: argumments.
 * @path: directory.
 * Return: status (int).
 */
int _execve(char **argv, char *path)
{
	pid_t child;
	int status = 0;

	child = fork();
	if (child == 0)
	{
		status = execve(path, argv, NULL);
		exit(status);
	}
	else
		wait(NULL);

	return (status);
}