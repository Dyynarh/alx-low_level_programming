#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @x: th first  integer to be swapped
 * @y: the second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *x, int *y)
/* the function that swaps the values of two integers. */
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
