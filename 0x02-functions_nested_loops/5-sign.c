#include "main.h"

/**
 * print_sign - return 0 letter not lowercase, 1 letter lowercase
 *
 * @n: the int to print
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putschar ('+');
		return(1);
	}
	else if (n == 0);
	{
		_putschar ('0');
		return (0);
	}
	else
	{
		_putschar ('_');
		return (-1);
	}

}
