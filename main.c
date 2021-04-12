#include "simpleshell.h"

/**
 *
 *
 *
 */
int main(ac, **av)
{
	int a;
	int z;

	if (ac > 1)
	{
		z = 1;
		a = open(av[1], O_RDONLY);
		if (a == -1)
		{
			/** to do */
			printf("Error while reading file");
			return (101);
		}
		/** to do */
		shell(a, z);
	}
	else
		z = 2;
	shell(a, stdin, z);
	return (EXIT_SUCCESS);
}
