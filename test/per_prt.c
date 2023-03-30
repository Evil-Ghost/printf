#include "main.h"

/**
 * per_prt - returns the character
 * @buff_dest: character
 * @arg: list of arguments
 * @buff_count: index of buffer pointer
 * Return: the buffer index
 */
int per_prt(char *buff_dest, va_list ap, int buff_count)
{
	char c = va_arg(ap, int);

	/* reassigned due to unexpected behaviour */
	c = '%';

	buff_dest[buff_count] = c;

	return (++buff_count);
}
