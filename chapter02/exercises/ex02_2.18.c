// Compare the highest rainfall even recorded with the current one.
// Author: Arber Cekrezi
// Date:28 / 09 / 2025
#include <stdio.h>

void	compare(int a, int b)
{
	if (a > b)
		printf("%d is higher than %d\n", a, b);
	if (a < b)
		printf("%d is less then %d\n", a, b);
	if (a == b)
		printf("%d is equal with %d\n", a, b);
}

int	main(void)
{
	int	current_rainfall;
	int	highest_rainfall;

	printf("Enter the highest rainfall value (as integer): ");
	scanf("%d", &highest_rainfall);
	printf("Enter the current rainfall value (as integer): ");
	scanf("%d", &current_rainfall);
	compare(current_rainfall, highest_rainfall);
	return (0);
}
