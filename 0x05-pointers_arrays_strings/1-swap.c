#include "main.h"
/**
 * swap_int - swaps value
 * @a: params
 * @b: params
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
