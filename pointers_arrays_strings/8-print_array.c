#include "main.h"
/**
 * print_array - a function that prints every other character of a string, starting with the first character, followed by a new line
 * @a: array name
 * @n: the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
