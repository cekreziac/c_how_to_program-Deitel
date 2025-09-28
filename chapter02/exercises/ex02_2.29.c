// Takes 3 different integers from user and displays in increasing order.
// Author: Arber Cekrezi
// Date: 28 / 09 / 2025

#include <stdio.h>

void	print_ascending_order(int a, int b, int c)
{
	int	temp;

	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("Numbers in ascending order: %d, %d, %d.\n", a, b, c);
}

int	main(void)
{
	int	no1;
	int	no2;
	int	no3;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &no1, &no2, &no3);
	print_ascending_order(no1, no2, no3);
	return (0);
}
