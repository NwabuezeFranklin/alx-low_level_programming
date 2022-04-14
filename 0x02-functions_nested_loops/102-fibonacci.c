#include <stdio.h>

/**
 * main - something
 * Return: something
 */
int main(void)
{
	long int i, j, k, l;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		l = j + k;
		j = k;
		k = l;
	}

	return (0);
}
