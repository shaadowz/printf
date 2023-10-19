#include "main.h"

/**
 * _printf - function that selects the correct output
 * @format: Character string
 *
 * Return: the number of characters printed
 */

int _printf(const char * const format, ...)
{
	checker a[] = {
		{"%s", _str}, {"%c", _char},
		{"%%", _perc},
		{"%i", _int}, {"%d", _dec}, {"%b", _bin}, {"%u", _unsigned},
		{"%o", _oct}, {"%x", _hex}, {"%X", _HEXi},
		{"%S", _exc_str}, {"%p", _ptr}, {"%r", _strrev}, {"%R", _rot13}
	};

	va_list arg_list;
	int index = 0, i, length = 0;

	va_start(arg_list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Processing:
	while (format[index] != '\0')
	{
		i = 12;
		while (i >= 0)
		{
			if (a[i].identifier[0] == format[index] &&
				a[i].identifier[1] == format[index + 1])
			{
				length += a[i].funptr(arg_list);
				index = index + 2;
				goto Processing;
			}
			i--;
		}
		_putchar(format[index]);
		length++;
		index++;
	}
	va_end(arg_list);
	return (length);
}
