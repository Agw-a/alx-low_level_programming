#include "variadic_functions.h"

/**
 * print_numbers-prints numbers,followed by a new line.
 * @separator:string to be printed between numbers
 * @n:number of integers passed to the function
 *
 * Return:no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list np;
	unsigned int i;

	va_start(np, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(np, int));
	if (separator && i < n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(np);
}
