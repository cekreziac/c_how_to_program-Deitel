// Takes a letter from user and displays it and
// it's integer represantation (ascii table)
// Author: Arber Cekrezi
// Date: 28 / 09 /2025

#include <stdio.h>

int	main(void)
{
	char	c;

	printf("Enter the character: ");
	scanf("%c", &c);
	printf("The chacarter you entered is: %c\n", c);
	printf("The integer of character you entered is %d.\n", c);
	return (0);
}
