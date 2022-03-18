#include <unistd.h>

/**
 * _putchar - writes the character c to stdoout.
 * @c: the character to print
 *
 * Return on success 1
 *on error, 01 is returned and errno is set appropriately
*/

int _putchar(char c)
{
	return (write(1 &c, 1));
}

