#include <stdio.h>

/**
 * main - program that prints fibonnacci under 4000000
 * Return: 0
 */
int main(void)
{
	int last_number = 4000000;
	int Num1 = 1;
	int Num2 = 2;
	int next;
	int sum = 2;

	while (next <= last_number)
	{
		next = Num1 + Num2;
		if (next % 2 == 0)
			sum = sum + next;
		Num1 = Num2;
		Num2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
