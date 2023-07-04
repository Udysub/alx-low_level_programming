#include "main.h"

/**
 * swap_int - takes in two variable integers and swaps them
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
