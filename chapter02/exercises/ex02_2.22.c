// Determines and displays if a number entered by user is odd or even.
// Author: Arber Cekrezi
// Date: 28 / 09 / 2025

#include <stdio.h>

int	main(void)
{
	int	number;

	printf("Enter the number: ");
	scanf("%d", &number);
	if (number % 2 != 0)
		printf("Number %d is odd.\n", number);
	if (number % 2 == 0)
		printf("Number %d is even.\n", number);
	return (0);
}
