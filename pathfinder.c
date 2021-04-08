#include "shell.h"
/**
 * pathCat - path function
 * @dir: direction
 * @av: characters
 * Return: buf (char).
 */
char *pathCat(char *dir, char *av)
{
	int i = 0, k = 0, length = 0, length2 = 0;
	char *buf;

	length = _stlren(dir);
	length2 = _stlren(av);
	buf = malloc(sizeof(char) * length + length2 + 1);
	while (i < length)
	{
		buf[i] = dir[i];
		i++;
	}
	while (i < length + length2)
	{
		buf[i] = av[k];
		i++;
		k++;
	}
	buf[i] = '\0';
	return (buf);
}