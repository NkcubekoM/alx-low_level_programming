#include "main.h"

/**
 * print_numbers - print number range 0-9
 * return: void
 */

void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

