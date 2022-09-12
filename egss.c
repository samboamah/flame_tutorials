#include <stdio.h>

/**
 * main - calculate number of dozens of eggs produced in a day
 * dozen = 12
 * for the second printf either make 12.0 or put (double infront of eggs)
 * return = 0
 */

int main (void)
{
	printf("The number of eggs for the day was: ");

	int eggs;
	scanf("%i", &eggs);
	double dozen = (double) eggs / 12;
	printf("%f dozens of eggs were produced today\n", dozen);

	return 0;
}
