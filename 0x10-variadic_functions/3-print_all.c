#include "variadic_functions.h"

/**
 * print_all-prints anything
 * @format:a list of types of arguments passed to the function
 *
 * Return:no return
 */
void print_all(const char * const format, ...)
{
	va_list formp;
	unsigned int i = 0;
	unsigned int j;
	unsigned int c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(formp, format);
	while (format && format[i])
	{
	j = 0;
	while (t_arg[j])
	{
	if (format[i] == t_arg[j] && c)
	{
	printf(", ");
	break;
	} j++;
	}
	switch (format[i])
	{
	case 'c':
	printf("%c", va_arg(formp, int)), c = 1;
	break;
	case 'i':
	printf("%d", va_arg(formp, int)), c = 1;
	case 'f':
	printf("%f", va_arg(formp, double)), c = 1;
	case 's':
	str = va_arg(formp, char *), c = 1;
	if (!str)
	{
	printf("(nil)");
	break;
	}
	printf("%s", str);
	break;
	} i++;
	}
	printf("\n"), va_end(formp);
}
