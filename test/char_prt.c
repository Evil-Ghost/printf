#include "main.h"

/**
 * char_ptr - returns the character
 * @buff_dest: buffer
 * @arg: list of arguments
 * @buff_count: index of buffer pointer
 * Return: buffer index
 */
int char_prt(char *buff_dest, va_list ap, int buff_count)
{
	char c = va_ap(ap, int);

	buff_dest[buff_count] = c;

	return (++buff_count);
}
