#include <unistd.h>

/**
 * _putchar - prints out characters
 * @c: character to be printed
 *
 * Return: returns write function
 */
int print_buff(char *buff, unsigned int nbuff)
{
	return (write(1, buff, nbuff));
}
