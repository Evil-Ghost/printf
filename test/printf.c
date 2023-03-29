#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints characters
 * @format - string to be taken in
 *
 * Return: returns 0 on success
 */
int _printf(const char *format, ...)
{
	int i;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (*(format + i) != '\0')
	{
		_putchar(*(format + i));
		i++;
	}
	
	va_end(ap);

	return (i);
}
