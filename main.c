#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len2;
	unsigned int ui;
	void *addr;

	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Character:[%c]\n", 'H');
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d]\n", len2);
	printf("String:[%s]\n", "I am a string !");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	printf("Address:[%p]\n", addr);	
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	printf("Negative:[%d]\n", -762534);
	printf("Length:[%d, %i]\n", len2, len2);

	return (0);
}
