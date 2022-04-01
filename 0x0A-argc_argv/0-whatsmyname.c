#include <stdio.h>

/**
 * main-prinmts its name followed by new line.
 * @argc:number of command line arguments.
 * @argv:arrays that contains command line arguments.
 * Return:0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
