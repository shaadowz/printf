#include "main.h"

/**
 * _len - Function that returns lenght of string
 * @str: pointer
 *
 * Return: a
 */

int _len(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}

/**
 * _lenc - _len Function for const
 * @str: pointer
 *
 * Return: a
 */

int _lenc(const char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
