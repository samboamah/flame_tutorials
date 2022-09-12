#include <stdio.h>

/**
 *
 * main - Calculating the area of a circle
 * take value of radius from the user (scanf does this)
 *
 *
*/
int main ()
{
	int r;
	printf("Please input the value of radius: ");
	scanf("%i", &r);

	double area = 3.14159 * r*r;
	printf("The area of the circle with %i radius is %f\n", r, area);

	return 0;
}
