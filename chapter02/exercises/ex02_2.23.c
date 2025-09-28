// Determines and displays if the first number is a multiple of the second.
// Two numbers are entered by user.
// Author: Arber Cekrezi
// Date: 28 / 09 / 2025

#include <stdio.h>

int	main(void)
{
	int	no1;
	int	no2;

	printf("Enter the two integer numbers: ");
	scanf("%d %d", &no1, &no2);
	if (no1 % no2 == 0)
		printf("The %d is multiple of %d.\n", no1, no2);
	if (no1 % no2 != 0)
		printf("The %d is not multiple of %d.\n", no1, no2);
	return (0);
}
