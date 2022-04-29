#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: pointer block of memory to fill
 *Return: void
 */

void _print_rev_recursion(char *s)
{
if (*s) /*If statement*/
{
_print_rev_recursion(s + 1); /*add s*/
_putchar(*s); /*print s*/
}
}
