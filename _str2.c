#include "main.h"
/**
 * _str2 - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int _str2(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _stlent(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _stlent(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
