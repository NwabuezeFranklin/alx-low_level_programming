#include "main.h"

/**
 * print_alphabet_*10 - print alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_*10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putschar(c);
			c++;
		}
		_putschar('\n');
		i++;
	}
}
