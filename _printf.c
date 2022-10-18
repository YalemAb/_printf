#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* _printf - prints a character string with embedded arguments
* @format: The format string
*
* Return: number of characters printed, excluding the null byte
*/
int _printf(const char *format, ...)
{
	char *for_tmp, *s_tmp;
	unsigned int len, i, counter;
	va_list ap, save;

	len = _strlen((char *)format);
	for_tmp = malloc(len + 1);
	if (for_tmp == NULL)
		return (-1);
	_strcpy((char *)format, for_tmp);
	if (for_tmp == NULL)
		return (0);
	va_start(ap, format);
	counter = 0;
	for (i = 0; i < len; i++)
	{
		if (for_tmp[i] == '%')
		{
			++i;
			if (for_tmp[i] == 'c')
			{
				_putchar(va_arg(ap, int));
				counter += 1;
				i += 1;
			}
			else if (for_tmp[i] == 's')
			{
				va_copy(save, ap);
				s_tmp = malloc(_strlen(va_arg(ap, char*)) + 1);
				if (for_tmp == NULL)
					return (-1); \
				_strcpy(va_arg(save, char*), s_tmp);
				va_end(save);
				print_str(s_tmp);
				counter += _strlen(s_tmp);
				i += 1;
				free(s_tmp);
			}
			else if (for_tmp[i] == '%')
			{
				_putchar('%');
				counter += 1;
			}
			else
			{
				_putchar('%');
				_putchar(for_tmp[i]);
			}
		}
		_putchar(for_tmp[i]);
		counter += 1;
	}
	va_end(ap);
	free(for_tmp);
	return (counter);
}




