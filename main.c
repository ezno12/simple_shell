
#include "shell.h"
/**
 * main - main function of shell.
 * @ac: argement number
 * @av: argumments
 * @env: env
 * Return: (status);
*/
int main(int ac, char *av[])
{
	int status = 0;

	if (ac == 1)
	{
		/* enter interactive mode & return status*/
		status = interactive();
	}
	else
	{
		/* enter no-interactive mode & return status */
		status = noninteractive(av);
	}
	return (status);
}