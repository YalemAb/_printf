#include "main.h"
#include <stdlib.h>

/**
* _strlen -  calculates the length of a string
* @str: string for which length is determined
*
* Return: length of the string, or 0 if string is null
*/
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* print_str -  prints a string using _putchar function
* @str: string to be printed
*
* Return: Nothing
*/
void print_str(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
	{
		print_str("(null)");
		return;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
