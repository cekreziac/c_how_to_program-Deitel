// Takes age from user and calculate the maximum heart beat
// and tagert of heart beat rate
// Author: Arber Cekrezi
// Date: 28 / 09 / 2025

#include <stdio.h>

int	main(void)
{
	int		age;
	int		maximum_heart_beat;
	float	min_target;
	float	max_target;

	printf("Enter your age: ");
	scanf("%d", &age);
	maximum_heart_beat = 220 - age;
	min_target = maximum_heart_beat * (50.0 / 100);
	max_target = maximum_heart_beat * (85.0 / 100);
	printf("Your maximum heart beat is %d.\n", maximum_heart_beat);
	printf("Your target is %.2f - %.2f.\n", min_target, max_target);
	return (0);
}
