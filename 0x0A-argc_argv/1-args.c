#include <stdio.h>
#include "main.h"
/**
 * @argc: command's line arguments
 * @argv: contain the command line
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

