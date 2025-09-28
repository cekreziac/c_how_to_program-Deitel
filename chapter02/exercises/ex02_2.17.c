// Calculate the final velocity (v) and distance (s)
// when user enter:
// initial velocity (u), acceleration (a) and
// time (t).
// Formulas:
// v = u + a * t, for final velocity.
// s = ut + (1 / 2) * a * t *t. for distance.
// Author: Arber Cekrezi
// Date: 28 / 09 / 2025
#include <stdio.h>

float	final_velocity(float u, float a, float t)
{
	return (u + a * t);
}

float	distance(float u, float a, float t)
{
	return (u * t + (1 / 2) * a * t * t);
}

int	main(void)
{
	float	u;
	float	a;
	float	t;

	printf("Enter the initial velocity: ");
	scanf("%f", &u);
	printf("Enter the acceleration: ");
	scanf("%f", &a);
	printf("Enter the time: ");
	scanf("%f", &t);
	printf("The final velocity is: %.2f.\n", final_velocity(u, a, t));
	printf("The distance is: %.2f.\n", distance(u, a, t));
	return (0);
}
