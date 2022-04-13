#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int a = 0, rep, b;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			rep = a * b
