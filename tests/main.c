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
	char *d;
	int b;

	if (a == 1)
	{
		/** to do */
		b = run(av++);
		exit;
	}
	if (a == 2)
	{
		getline(stdin, e, 1024);
		d = strtok(e, " \t");
		b = run(d);
		free(e);
		free(d);
		// to do
		if (d != ??)
			shell(a, z);
	}
}
int run(*e)
{
	int i;

}
