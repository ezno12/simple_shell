#include "shell.h"

/**
 * _strcmp - compares 2 strings
 * @s1: is compared
 * @s2: is compared
 * Return: comparison result
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}
