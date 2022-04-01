#include <stdio.h>

/**
 * main-prinmts its name followed by new line.
 * @argc:number of command line arguments.
 * @argv:arrays that contains command line arguments.
 * Return:0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
