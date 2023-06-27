#include "main.h"

/**
 * printf - function that prints anything
 * @format: pointer to a constant array of strings
 * Return: number of arguments printed
 */
int printf(const char *format, ...)
{
	va_list print_all;
	int i = 0;
	int arg_count = 0;

	va_start(print_all, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			arg_count++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_print_char(print_all);
				arg_count++;
				i++;
			}

			if (format[i + 1] == '%')
			{
				_putchar('%');
				arg_count++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				_print_string(print_all);
				arg_count++;
				i++;
			}
		}
		i++;
	}
	va_end(print_all);
	return (arg_count);
}

