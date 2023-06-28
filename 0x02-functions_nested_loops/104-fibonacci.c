#include <stdio.h>

/**
 * print_fibonacci - Prints Fibonacci numbers up to count
 *
 * @count: The number of Fibonacci numbers to print
 */
void print_fibonacci(int count)
{
	unsigned long fib1 = 1, fib2 = 2, fib_next;

	printf("%lu, %lu", fib1, fib2);

	while (count > 2)
	{
		fib_next = fib1 + fib2;
		printf(", %lu", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
		count--;
	}
}

/**
 * print_big_fibonacci - Prints large Fibonacci numbers from count
 *
 * @count: The number of large Fibonacci numbers to print
 */
void print_big_fibonacci(int count)
{
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	fib1_half1 = 0;
	fib1_half2 = 1;
	fib2_half1 = 0;
	fib2_half2 = 2;

	while (count > 0)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;

		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf(", %lu%010lu", half1, half2);

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
		count--;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 98;

	print_fibonacci(count - 2);
	print_big_fibonacci(6);

	printf("\n");

	return (0);
}
