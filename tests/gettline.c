#include "shell.h"

/**
 * gettline - reads input and stores
 * 
 * Return: pointer to string
 */

int gettline(char **line, int a)
{
	int i = 0, readd = 0, k = 1;
	char e;

	*line = malloc(sizeof(char) * 1);
	while ((readd = read(a, &e, 1)) > 0)
	{
		if (e == '\n')
			*(*line + i) = '\0';
		else
			*(*line + i) = e;
		if (i >= k)
			*line = ralloc(*line, i, i + 1);
		i++;
		k++;
	}
	if (readd == 0)
		return (0);
	else
		return (-1);
}
