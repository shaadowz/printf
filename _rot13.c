#include "main.h"
/**
 * _rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int _rot13(va_list args)
{
	int x, y, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x]; x++)
	{
		k = 0;
		for (y = 0; alpha[y] && !k; y++)
		{
			if (s[x] == alpha[y])
			{
				_putchar(beta[y]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[x]);
			counter++;
		}
	}
	return (counter);
}
