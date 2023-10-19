#include "main.h"

/**
 * _int - function that prints integer
 * @myNums: input
 *
 * Return: number of characters it printed
 */

int _int(va_list myNums)
{
	int numbers = va_arg(myNums, int);
	int nums, lastNum = numbers % 10, dig, mul = 1;
	int count = 1;

	numbers = numbers / 10;
	nums = numbers;

	if (lastNum < 0)
	{
		_putchar('-');
		nums = -nums;
		numbers = -numbers;
		lastNum = -lastNum;
		count++;
	}
	if (nums > 0)
	{
		while (nums / 10 != 0)
		{
			mul = mul * 10;
			nums = nums / 10;
		}
		nums = numbers;
		while (mul > 0)
		{
			dig = nums / mul;
			_putchar(dig + '0');
			nums = nums - (dig * mul);
			mul = mul / 10;
			count++;
		}
	}
	_putchar(lastNum + '0');

	return (count);
}


/**
 * _dec - function that prints integer
 * @myNums: input
 *
 * Return: number of characters it printed
 */

int _dec(va_list myNums)
{
	int numbers = va_arg(myNums, int);
	int nums, lastNum = numbers % 10, dig, mul = 1;
	int count = 1;

	numbers = numbers / 10;
	nums = numbers;

	if (lastNum < 0)
	{
		_putchar('-');
		nums = -nums;
		numbers = -numbers;
		lastNum = -lastNum;
		count++;
	}
	if (nums > 0)
	{
		while (nums / 10 != 0)
		{
			mul = mul * 10;
			nums = nums / 10;
		}
		nums = numbers;
		while (mul > 0)
		{
			dig = nums / mul;
			_putchar(dig + '0');
			nums = nums - (dig * mul);
			mul = mul / 10;
			count++;
		}
	}
	_putchar(lastNum + '0');

	return (count);
}
