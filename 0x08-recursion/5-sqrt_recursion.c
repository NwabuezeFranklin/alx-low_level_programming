#include "main.h"
/**
 *_evaluate - evaluate function sqrt
 *@i: interger
 *@n: interger
 *Return: evaluate sqrt
 */

int _evaluate(int i, int n)
{
/*Evaluate function*/
if (n == 0 || n == 1)
return (n);

else if (i * i < n)
return (_evaluate(i + 1, n));

else if (i * i == n) /*Condiction base*/
return (i);

return (-1);

return (-1);
}

/**
 *_sqrt_recursion - evaluate sqrt
 *@n: interger
 *Return: Sgrt_recursion
*/

int _sqrt_recursion(int n)
{
int i = 0;

if (i < 0) /*If n is negative*/
return (-1);

else
{
return (_evaluate(i, n)); /*Recursive call*/
}

}
