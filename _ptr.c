#include "main.h"

/**
 * _potr - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int _ptr(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int c;
	int bit;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	c = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	bit = _hex_aux(c);
	return (bit + 2);
}
