#include <main.h>

/**
 * print alphabet- Make the alphabet
 * Return: Void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return(0);
}
