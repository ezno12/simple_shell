#define H
void *ralloc(void *ptr, unsigned int old_size, unsigned int new_size);
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
// not done yet
/**
 * prompt - reads input
 *
 * Return: pointer to string
 */
int gettline(char **line, int a)
{
	int i = 0, j = 0, k = 1;
	char *e;

	e = malloc(sizeof(char) * i);
	while ((j = read(stdin, &e, i)) > 0)
	{
		e = ralloc
		i++;
	}
	//	e = ralloc;
	//read(stdin, ent, 1024);
	//printf("%s\n", ent);
	printf("just i = %d\n", i);
	free(e);
	return (0);
}
