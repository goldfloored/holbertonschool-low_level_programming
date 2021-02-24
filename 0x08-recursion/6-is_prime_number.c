#include "holberton.h"
/**
*st - function that returns the prime number.
*@i: int
*@j: int
*Return: integer
*/
int st(int i, int j)
{
if (i % j == 0)
return (0);
if (j > (i / 2))
return (1);
return (st(i, ++j));
}


/**
*is_prime_number - function
*@n: int
* Return: if its prime
*/

int is_prime_number(int n)
{
return (st(2, n));
}
