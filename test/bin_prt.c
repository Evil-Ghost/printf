#include "main.h"

/**
 * bin_prt - substitute %b by unsigned int argument number
 * @buff_dest: string to change
 * @arg: va_list arg to change
 * @buff_count: index of buffer where the b of %b is
 * Return: New index
 */
int bin_prt(char *buff_dest, va_list ap, int buff_count)
{
	unsigned int number = va_ap(ap, unsigned int);
	unsigned int tmp = number;
	int bin = 1;

	while (tmp > 1)
	{
		bin *= 2;
		tmp /= 2;
	}

	tmp = number;
	while (bin > 0)
	{
		buff_dest[buff_count] = ('0' + tmp / bin);
		tmp %= bin;
		bin /= 2;
		buff_count++;
	}

	return (buff_count);
}
