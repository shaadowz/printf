#include "main.h"

/**
 * _char - function to print a char
 * @var: argument passed
 *
 * Return: 1
 */

int _char(va_list var)
{
	char p;

	p = va_arg(var, int);
	_putchar(p);
	return (1);
}
