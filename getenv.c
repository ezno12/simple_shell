#include "shell.h"
/**
 * _getenv - function getenv: search env string pionted.
 * @name: char
 * @env: env
 * Return: null.
 */
char *_getenv(const char *name, char **env)
{
	int i = 0, j = 0;

	if (name == NULL || env == NULL || *env == NULL)
		return (NULL);
	while (env[i] != NULL)
	{
		while (env[i][j] == name[j])
			j++;
		if (env[i][j] == '=')
		{
			j++;
			return (&(env[i][j]));
		}
		i++;
		j = 0;
	}
	write(STDOUT_FILENO, "ERROR", 5);
	return (NULL);
}