// fig02_05.c
// Using if statements. relational
// operators, and equality
// operators.
#include <stdio.h>

void	equal_or_relational(int a, int b)
{	
	if (a == b)
		printf("%d = %d\n", a, b);
	if (a != b)
		printf("%d not %d\n", a, b);
	if (a < b)
		printf("%d < %d\n", a, b);
	if (a > b)
		printf("%d > %d\n", a, b);
	if (a <= b)
		printf("%d <= %d\n", a, b);
	if (a >= b)
		printf("%d >= %d\n", a, b);
}

int	main(void)
{	
	int number1;
	int number2;

	printf("Enter two integers, and I will tell you.\n");
	printf("The reationships they satisfy.");
	scanf("%d %d", &number1, &number2);
	equal_or_relational(number1, number2);
}
