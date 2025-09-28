// Calculate the sum, average, product, smallest, largest
// of three integers entered by user.
// Author: Arber Cekrezi
// Date: 28 / 09 / 2025
#include <stdio.h>

void	calculation(int no1, int no2, int no3)
{
	printf("Sum is %d.\n", no1 + no2 + no3);
	printf("Averages is %d.\n", (no1 + no2 + no3) / 3);
	printf("Product is %d.\n", no1 * no2 * no3);
}

int	max3(int a, int b, int c)
{
	int	max;

	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return (max);
}

int	min3(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

int	main(void)
{
	int	no1;
	int	no2;
	int	no3;

	printf("Enter the three digits: ");
	scanf("%d %d %d", &no1, &no2, &no3);
	calculation(no1, no2, no3);
	printf("Largest is %d.\n", max3(no1, no2, no3));
	printf("Smallest is %d.\n", min3(no1, no2, no3));
	return (0);
}
