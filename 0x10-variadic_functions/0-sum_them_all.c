#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - This fxn. returns the sum of all its paramters.
* @n: The no. of paramters passed to the fxn.
* @...: A variable no. of paramters to calculate the sum of.
*
* Return: 0 If n == 0
*         Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int j, sum = 0;


va_start(ap, n);


for (j = 0; j < n; j++)
sum += va_arg(ap, int);


va_end(ap);


return (sum);
}
