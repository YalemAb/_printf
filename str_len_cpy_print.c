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
* _strcpy -  copies contents of one string 1 to string 2
* @str1: string 1 (to be copied)
* @str2: string 2 (stores copy of string 1)
*
* Return: Nothing
*/
void _strcpy(char *str1, char *str2)
{
	unsigned int i = 0;

	if (str1 == NULL)
	{
		str2 = NULL;
		return;
	}
	else 
	{
		for (; i <= _strlen(str1); i++)
			str2[i] = str1[i];
		str2[i] = '\0';
	} 
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
