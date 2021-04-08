#include "shell.h"
/**
 * _strdup - strdup function
 * @str: char pointer
 * Return: always my array
 */
char *_strdup(char *str)
{
	char *my_array;
	int i, len;

	my_array = malloc(sizeof(str));
	i = len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (my_array == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		my_array[i] = str[i];
		i++;
	}
	return (my_array);
}
/**
 * tokenizer - takes a string and splits it into different strings
 * @buffer: buffer
 * @delim: character
 * Return: tokens
 */
char **token(char *buffer, const char *delim)
{
	char **tokens, *clone = NULL;
	size_t words = 0;

	tokens = malloc(sizeof(char *) * TOKEN_SIZE);
	if (!tokens)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	clone = strtok(buffer, delim);
	for (; clone != NULL; clone = strtok(NULL, delim))
	{
		tokens[words] = _strdup(clone);
		words++;
	}
	tokens[words] = clone;
	free(clone);
	return (tokens);
}