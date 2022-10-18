#ifndef MAIN_H
#define MAIN_H "main.h"
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
unsigned int _strlen(char *str);
void print_str(char *str);
int n_digit(int x);
void print_ndigit(int x, int n);
int specifier_handler(char spec, va_list ap);
int sign_check(int x);
#endif
