#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_char - function prints character
 * @print_all: name of variadic list
 * Return: 0
 */

int _print_char(va_list print_all)
{
	char s;

	s = (char)va_arg(print_all, int);
	_putchar(s);

	return (0);
}

/**
 * _print_string - function that prints string
 * @print_all: variadic lists.
 * Return: length of string
 */

int _print_string(va_list print_all)
{
	char *s;
	int length = 0;

	s = va_arg(print_all, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	else
	{
		while (s[length] != '\0')
		{
			_putchar(s[length]);
			length++;
		}
	}
	return (length);
}

