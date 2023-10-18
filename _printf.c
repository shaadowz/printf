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
		{"%s", _str}, {"%c", _char}, {"%%", _perc},
		{"%i", _int}, {"%d", _decimal}
	};

	va_list arg_list;
	int index = 0, i, length = 0;

	va_start(arg_list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[index] != '\0')
	{
		i = 13;
		while (i >= 0)
		{
			if (format_specifiers[i].specifier[0] == format[index] &&
				format_specifiers[i].specifier[1] == format[index + 1])
			{
				length += format_specifiers[i].handler(arg_list);
				index = index + 2;
				goto Processing;
			}
			i--;
		}
		_putchar(format[index]);
		length++;
		index++;
	}
Processing:
	va_end(arg_list);
	return (length);
}
