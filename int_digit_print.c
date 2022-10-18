#include "main.h"
/**
* n_digit - counts the number of digits in an integer
* @x: Number whose digits to be counted
*
* Return: Number of digits in integer x
*/

int n_digit(int x)
{
	int counter = 0;

	if (x == 0)
	{
		return (1);
	}
	else
	{
		while (x != 0)
		{
			counter++;
			x /= 10;
		}
		return (counter);
	}
}

/**
* print_ndigit -  prints an n digit integer number using _putchar function
* @x: Number to be printed
* @n: Maximum expected number of digits
*
* Return: Nothing
*/

void print_ndigit(int x, int n)
{
	int i, tmp, _10n;

	_10n = 1;
	for (i = 1; i < n; i++)
		_10n *= 10;
	if (x < 0)
	{
		_putchar('-');
		x *= -1;
	}
	while (n > 1)
	{
		tmp = x / (_10n);
		if (tmp > 0)
		{
			_putchar('0' + tmp);
			x = x % (_10n);
		}
		n--;
		_10n /= 10;
	}
	_putchar('0' + x);
}

/**
* sign_check -  checks sign of an integer number
* @x: Number to be checked
*
* Return: 0 if number is positver or zero, 1 if number is negative
*/

int sign_check(int x)
{
	if (x < 0)
		return (1);
	return (0);
}
