#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - presents a prompt
 *
 * Return: 0
 */
int main(void)
{
	char *a;
	size_t n = 16;
	int b;

	a = NULL;
	printf("$ ");
	b = getline(&a, &n, stdin);
	
	printf("%s, b = %d\n", a, b);
	free(a);
}
