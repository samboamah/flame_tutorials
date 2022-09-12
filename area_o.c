#include <stdio.h>
/*
 * main - program that calculates the area of a circle
 * radius is taken from user
 * scanf needs to come after the
 * return = 0
*/

int main(void)
{
	int radius;
	printf("Please enter the value of radius: ");
	scanf("%i", &radius);

	double area = 3.1415926 * (radius * radius);
	printf("The area of the circle with radius %i is : %f\n", radius, area);
	return 0;
}
