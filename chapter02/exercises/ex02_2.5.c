// ex02_2.5
// Calculate the product of three integers.
#include <stdio.h>

int	main(void)
{	
	int x;
	int y;
	int z;
	int result;

	printf("Enter three integers: ");
	scanf("%d %d %d", &x, &y, &z);
	result = x * y * z;
	printf("The product is: %d.\n", result);
	return (0);
}
