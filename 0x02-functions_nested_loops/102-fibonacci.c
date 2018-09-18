/*
 * File: 102-fibonacci.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count = 0;
	float fib1 = 1, fib2 = 0, sum;

	while (count < 50)
	{
		sum = fib1 + fib2;
		printf("%.0f", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
		count++;
	}

	return (0);
}
