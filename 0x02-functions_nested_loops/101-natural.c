#include <stdio.h>
/**
 * main - a function that prints multiples of 3
 * Return: void
 */
int main(void)
{
	int sum;
	int a;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum = sum + a;
	}
	printf("%d\n", sum);
}
