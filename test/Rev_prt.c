#include "main.h"

/**
 * Rev_prt - substitute %R by argument number in rot13
 * @buff_dest: string to change
 * @arg: va_list char to change
 * @buff_count: index of dst where the R of %R is
 * Return: New index
 */
int Rev_prt(char *buff_dest, va_list ap, int buff_count)
{
	char *str;
	char *keys = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *keynew = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j = 0;

	str = va_ap(ap, char *);
	while (str[j])
	{
		for (i = 0; keys[i]; i++)
		{
			if (str[j] == keys[i])
			{
				buff_dest[buff_count] = keynew[i];
				break;
			}
			buff_dest[buff_count] = str[j];
		}
		j++, buff_count++;
	}

	return (buff_count);
}
