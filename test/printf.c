#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints characters
 * @format - string to be taken in
 *
 * Return: returns char on success
 */
int _printf(const char *format, ...)
{
	int i= 0, j = 0, buff_count = 0, prev_buff_count = 0;
	char buffer[2000];
	va_list ap;
	call_t container[] = 
	{
		{'c', parse_char}, {'s', parse_str}, {'i', parse_int}, {'d', parse_int},
		{'%', parse_perc}, {'b', parse_bin}, {'o', parse_oct}, {'x', parse_hex},
		{'X', parse_X}, {'u', parse_uint}, {'R', parse_R13}, {'r', parse_rev},
		{'\0', NULL}
	}

	if (!format)
		return (-1);
	va_start(ap, format);
	while (format && format[i] != '\0')
	{
	if (format[i] == '%')
		{
			i++, prev_buff_count = buff_count;
			for (j = 0; container[j].t != '\0'; j++)
			{
				if (format[i] == '\0')
					break;
				if (format[i] == container[j].t)
				{
					buff_count = container[j].f(buffer, ap, buff_count);
					break;
				}
			}
			if (buff_count == prev_buff_count && format[i])
				i--, buffer[buff_count] = format[i], buff_count++;
		}
		else
			buffer[buff_count] = format[i], buff_count++;
		i++;
	}
	va_end(ap);
	buffer[buff_count] = '\0';
	print_buff(buffer, buff_count);
	return (buff_count);
}
