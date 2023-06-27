#include "main.h"

/**
 * _print_int - function that prints an integer to stdout
 * @print_all: - the arguments to print
 * Return: 0
 */
int _print_int(va_list print_all)
{
	int number, int_last, int_rev = 0, numDigits = 0, temp;

	number = va_arg(print_all, int);
	if (number == 0)
	{
		_putchar('0');
	}
	else if (number < 0)
	{
		_putchar('-');
		number *= -1;
	}
	else
	{
	while (number > 0)
	{
		int_last = number % 10;
		int_rev = int_rev * 10 + int_last;
		number /= 10;
	}

	temp = int_rev;

	while (temp > 0)
	{
		 _putchar('0' + (temp % 10));
		temp /= 10;
		numDigits++;
	}

	return (numDigits);
	}
	return (0);
}


/**
 * _print_dec - function that prints a decimal to stdout
 * @print_all: - the arguments to print
 * Return: 0
 */
int _print_dec(va_list print_all)
{
	int number, int_last, int_rev = 0, numDigits = 0, temp;

	number = va_arg(print_all, int);
	if (number == 0)
	{
		 _putchar('0');
	}
	else if (number < 0)
	{
		 _putchar('-');
		number *= -1;
	}
	else
	{
		while (number > 0)
		{
			int_last = number % 10;
			int_rev = int_rev * 10 + int_last;
			number /= 10;
		}

		temp = int_rev;

		while (temp > 0)
		{
			 _putchar('0' + (temp % 10));
			temp /= 10;
			numDigits++;
		}

	return (numDigits);
	}
	return (0);
}

