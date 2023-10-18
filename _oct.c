#include "main.h"

/**
 * _oct - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int _oct(va_list val)
{
	int i;
	int *array;
	int x = 0;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int temp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		x++;
	}
	x++;
	array = malloc(x * sizeof(int));

	for (i = 0; i < x; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (x);
}
