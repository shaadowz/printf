#include "main.h"
/**
 * _unsigned - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int _unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, lst = n % 10, value, exp = 1;
	int  j = 1;

	n = n / 10;
	num = n;

	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lst = -lst;
		j++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			value = num / exp;
			_putchar(value + '0');
			num = num - (value * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(lst + '0');

	return (j);
}
