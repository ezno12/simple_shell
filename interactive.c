#include "shell.h"
/**
 * interactive - interactive function.
 *
 * Return: status (int).
 */
int interactive(void)
{
	/* store variables to execute */
	char *buffer, **arguments = NULL;
	const char *delim = " ";
	ssize_t status = 0;
	int i;

	while (status == 0)
	{
		buffer = NULL;
		/* buffer sotrage user varaibles */
		buffer = malloc(sizeof(char) * BUFFER_SIZE);
		if (buffer == NULL)
		{
			perror("Unable to allocate buffer");
			exit(1);
		}
		printf("$ ");
		/* capture the buffer line */
		status = readline(buffer);
		if (status == -1)
		{
			break;
		}
		buffer = strtok(buffer, "\n");
		/* arrgement is string array */
		arguments = token(buffer, delim);
		/* check the entred command */
		if(path(arguments[0]) == NULL)
		{
			/* Part of command not found result */
		}
		status = _execve(arguments, arguments[0]);
		i = 0;
		while (arguments[i] != NULL)
		{
			free(arguments[i]);
			i++;
		}
		free(arguments);
		free(buffer);
	}
	return (status);
}