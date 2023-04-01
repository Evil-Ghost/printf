#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints characters
 * @format - string to be taken in
 *
 * Return: returns length of string (format)
 */
int _printf(const char *format, ...)
{
	int i= 0, j = 0, buff_count = 0, prev_buff_count = 0;
	char buffer[2000];
	va_list ap;
	call_t container[] = 
	{
		{'c', char_prt}, {'s', str_prt}, {'i', int_prt}, {'d', int_prt},
                {'%', per_prt}, {'b', bin_prt}, {'o', oct_prt}, {'x', parse_hex},
                {'X', prt_X}, {'u', ut_prt}, {'R', Rev_prt}, {'r', rev1_prt},
                {'\0', NULL}	
	};

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
