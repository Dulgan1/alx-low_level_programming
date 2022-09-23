#include <stdio.h>

/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int sum_of_evens = 0;
	int n;
	int m;
	int sum = 1;

	n = 1;
	m = 1;

	while (n < 4000000)
	{
		sum = n + m;
		n = m;
		m = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_of_evens += sum;
	}
	printf("%d\n", sum_of_evens);

	return (0);
}
