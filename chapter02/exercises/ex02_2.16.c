// Calculate the sum, product, difference, quotient and
// remainder of two integers.
// Author: Arber Cekrezi
// Date: 28 / 09 / 2025
#include <stdio.h>

int	main(void)
{
	int integer1;
	int integer2;

	printf("Enter two integers: ");
	scanf("%d %d", &integer1, &integer2);
	printf("Sum is: %d.\n", integer1 + integer2);
	printf("Difference is: %d.\n", integer1 - integer2);
	printf("Product is %d.\n", integer1 * integer2);
	printf("Quotient is %d.\n", integer1 / integer2);
	printf("Remainder is: %d.\n", integer1 % integer2);
	return (0);
}
