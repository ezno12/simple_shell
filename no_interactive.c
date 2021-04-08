#include "shell.h"
/*
 * noninteractive - no interactive function.
 *
 * return: status (int).
*/
/* not yet implemented */
int noninteractive(char *av[])
{
	int status;
	status = _execve(av, av[1]);
	return (status);
}