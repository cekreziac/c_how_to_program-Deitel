// fig02_04.c
// Addition
#include <stdio.h>

int 	main(void)
{	
	int integer1 = 0;
	int integer2 = 0;

	printf("Enter the first integer: ");
	scanf("%d", &integer1);
	printf("Enter the second integer: ");
	scanf("%d", &integer2);
	int sum = 0;
	sum = integer1 + integer2;
	printf("Sum is %d.\n", sum);
       	return (0);
}

