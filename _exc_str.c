#include "main.h"
/**
 * _exc_str - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int _exc_str(va_list val)
{
	char *s;
	int x, met = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] < 32 || s[x] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			met = met + 2;
			cast = s[x];
			if (cast < 16)
			{
				_putchar('0');
				met++;
			}
			met = met + _HEX_aux(cast);
		}
		else
		{
			_putchar(s[x]);
			met++;
		}
	}
	return (met);
}
