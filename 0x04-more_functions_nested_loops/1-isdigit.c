#include "main.h"
/**
 * _isdigit - checks if parameter is a number between 0 to 
 * @c:input number
 * Return: 1 if a number (0-9), 0 if other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
