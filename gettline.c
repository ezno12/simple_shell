#include "shell.h"

/**
 * gettline - reads input and stores
 * @a: input direction
 * Return: pointer to string
 */

char *gettline(int a)
{
	char *line;
	int i = 0, readd = 0;
	char e = 0;

	line = malloc(sizeof(char) * 1024);
	if (line == NULL)
		return (NULL);
	while (e != '\n' && e != EOF)
	{
		readd = read(a, &e, 1);
		if (readd == 0)
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		line[i] = e;
		if (i >= 1024)
			line = ralloc(line, 1024, i + 1);
		i++;
	}
	line[i] = '\0';
	return (line);
}
