#include <stdio.h>

/**
 * main - the program to print fibonnacci number
 * Return: 0
 */
int main(void)
{
	unsigned long int Num1 = 1;
	unsigned long int Num2 = 2;
	unsigned long int next;
	int x;

	printf("%lu, ", Num1);
	for (x = 1; x < 50; x++)
	{
		printf("%lu", Num2);
		next = Num1 + Num2;
		Num1 = Num2;
		Num2 = next;
		if (x != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
