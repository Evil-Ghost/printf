#include <unistd.h>

/**
 * _putchar - prints out characters
 * @c: character to be printed
 *
 * Return: returns write function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
