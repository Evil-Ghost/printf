#include "main.h"
#include <stdio.h>

/**
 * main - tests the _printf function
 *
 * Return: returns 0 on success
 */
int main(void)
{
	int len, len2;

	_printf("Hello World!\n");
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	printf("len = %d\nlen2 = %d\n", len, len2);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("Unknown:[%r]\n");

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
