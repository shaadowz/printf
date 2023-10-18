#include "main.h"

/**
 * _str - function to print a string
 * @var: argument passed
 *
 * Return: lenght of string
 */

int _str(va_list var)
{
	int count, lenght;
	char *p;

	p = va_arg(var, char *);
	if (p == NULL)
	{
		p = "(null)";
		lenght = _len(p);
		for (count = 0; count < lenght; count++)
			_putchar(p[count]);
		return (lenght);
	}
	else
	{
		lenght = _len(p);
		for (count = 0; count < lenght; count++)
			_putchar(p[count]);
		return (lenght);
	}
}
