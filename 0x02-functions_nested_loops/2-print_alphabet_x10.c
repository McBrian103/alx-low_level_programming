#include "main.h"

/**
 * prints the alphabet in lowercase 10 times.
 *
 * Return:mAlways 0.
 */

void print_alphabet(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}

