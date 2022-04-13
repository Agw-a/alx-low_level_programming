#include "3-calc.h"

/**
 * op_add-sums two numbers
 * @a:first number
 * @b:second number
 *
 * Return:sum of two numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub-subtracts two numbers
 * @a:first number
 * @b:second number
 *
 * Return:difference between two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul-multiplies two numbers
 * @a:first number
 * @b:second number
 *
 * Return:product of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div-divides two numbers
 * @a:first number
 * @b:second number
 *
 * Return:quotient of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
 * op_mod-calculates the modulus of a number
 * @a:first number
 * @b:second number
 *
 * Return:remainder of a division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n")
	exit(100);
	}
	return (a % b);
}
