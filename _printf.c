#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
* _printf - prints a character string with embedded arguments
* @format: The format string to be printed
*
* Return: number of characters printed, excluding the null byte
*/
int _printf(const char *format, ...)
{
	unsigned int len, i, counter, tmp_count;
	va_list ap;

	if (format == NULL)
		return (-1);
	len = _strlen((char *)format);
	va_start(ap, format);
	counter = 0;
	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			++i;
			tmp_count = counter;
			counter += specifier_handler(format[i], ap);
			if (!(counter == tmp_count && format[i] != 's'))
				i += 1;
		}
		_putchar(format[i]);
		counter += 1;
	}
	va_end(ap);
	return (counter);
}

/**
* specifier_handler - handles special specifiers for _printf function
* @spec: the specifier
* @ap: list to _printf arguments
*
* Return: number of characters printed, excluding the null byte
*/
int specifier_handler(char spec, va_list ap)
{
	va_list save;
	int tmp, count = 0;

	if (spec == 'c')
	{
		_putchar(va_arg(ap, int));
		count = 1;
	}
	else if (spec == 's')
	{
		va_copy(save, ap);
		print_str(va_arg(ap, char*));
		count = _strlen(va_arg(save, char*));
		va_end(save);
	}
	else if (spec == '%')
	{
		_putchar('%');
		count = 1;
	}
	else if (spec == 'd')
	{
		tmp = va_arg(ap, int);
		print_ndigit(tmp, n_digit(tmp));
		count = n_digit(tmp) + sign_check(tmp);
	}
	else if (spec == 'i')
	{
		tmp = va_arg(ap, int);
		print_ndigit(tmp, n_digit(tmp));
		count = n_digit(tmp) + sign_check(tmp);
	}
	else
	{
		_putchar('%');
	}
	return (count);
}


