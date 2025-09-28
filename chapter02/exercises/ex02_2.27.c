// Sums each of the individual digits of 4-digit number taken by user.
// Author: Arber Cekrezi
// Date: 28 / 09 / 2025

#include <stdio.h>

/*
int	main(void)
{
	int	number;
	int	intermediate;
	int	digits;
	int	tens;
	int	hundreds;
	int	thousands;

	printf("Enter the number: ");
	scanf("%d", &number);
	thousands = number / 1000;
	intermediate = number % 1000;
	hundreds = intermediate / 100;
	intermediate = intermediate % 100;
	tens = intermediate / 10;
	digits = intermediate % 10;
	printf("Sum is: %d.\n", thousands + hundreds + tens + digits);
	return (0);
}
*/

int	get_sum_of_digits(int number)
{
	int	thousands;
	int	hundreds;
	int	tens;
	int	digits;
	int	intermediate;

	thousands = number / 1000;
	intermediate = number % 1000;
	hundreds = intermediate / 100;
	intermediate = intermediate % 100;
	tens = intermediate / 10;
	digits = intermediate % 10;
	return (thousands + hundreds + tens + digits);
}

int	main(void)
{
	int	number;
	int	sum;

	printf("Enter the number: ");
	scanf("%d", &number);
	sum = get_sum_of_digits(number);
	printf("Sum of all digits is: %d.\n", sum);
	return (0);
}
