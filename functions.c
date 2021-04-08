#include "shell.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: int less than 0 if s1 is found
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] >  s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/**
 * _stlren - function strlen
 *
 * @string: string
 *
 * Return: x
 */
int _stlren(char *string)
{
	int x = 0;

	while (string[x])
	{
		x++;
	}

	return (x);
}
/**
 * _strchr - locates a char in a string
 * @s: the string to check
 * @c: char to find
 *
 * Return: pointer to the first char ocurrency.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}
/**
 * _strtok - function to split
 * @str: string
 * @delim: limitador
 * Return: str
 */
char *_strtok(char *str, char *delim)
{
	int c;
	static char *string;

	if (!str)
		str = string;
	c = *str++;
	while (_strchr(delim, c))
	{
		if  (c == 0)
			return (0);
		c = *str++;
	}
	--str;
	string = str + _strcspn(str, delim);
	if (*string != 0)
	{
		*string = 0;
		string++;
	}
	return (str);
}
/**
 * _strcpn - locates a char in a string
 * @s: the string to check
 * @accepte: prefix to find
 * Return: integer with match amount.
 */
unsigned int _strcspn(char *s, char *accepte)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accepte[j] == '\0' && s[i] != accepte[j])
			j++;
		if (accepte[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}