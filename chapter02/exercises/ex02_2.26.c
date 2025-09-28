// Takes a integer number from user and displays 
// it's character represantation according to ascci table.
// Author: Arber Cekrezi
// Date: 28 / 09 / 2025

#include <stdio.h>

int	main(void)
{
	int	number;

	printf("Enter your integer number: ");
	scanf("%d", &number);
	printf("Character corresponding number %d is %c.\n", number, (char)number);
	return (0);
}
