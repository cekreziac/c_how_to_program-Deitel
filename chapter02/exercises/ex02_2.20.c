// Convert in hours, minutes and seconds a integer (which is in seconds) 
// entered by user.
// Author: Arber Cekrezi
// Date: 28 / 09 / 2025

#include <stdio.h>

int	main(void)
{
	int	number;
	int	hours;
	int	minutes;
	int	seconds;
	int	intermediate;

	printf("Enter the number in seconds: ");
	scanf("%d", &number);
	hours = number / 3600;
	intermediate = number % 3600;
	minutes = intermediate / 60;
	seconds = intermediate % 60;
	printf("%d:%d:%d\n", hours, minutes, seconds);
	return (0);
}
