#include "simpleshell.h"

/**
 * main - displays a prompt and waits for user to enter a command
 *
 *
 */
int main(ac, **av)
{
	int a;

	if (ac > 1)
		a = 1;
	else
		a = 2;
	shell(a, av);
	return (EXIT_SUCCESS);
}

/**
 *
 *
 *
 */
void shell(int a, **av)
{
	char *e;

	if (a == 1)
	{
		/** to do */
		run(av++);
		exit;
	}
	if (a == 2)
	{
		getline(stdin, e, 1024);
		run(e);
		free(e);
		shell(a, z);
	}
}
