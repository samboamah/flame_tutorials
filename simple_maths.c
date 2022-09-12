#include <stdio.h>

/**
* Expression - Anything that can be evaluated (to one value)
* Statement
* Declaration  -- Return 0
* Initialization
*/

int main(void)
{
	int x = 10; //hard coding - bad. Ask client for input!
	int y = x / 2;

	printf("The magic number is: %i\nThe value of x is  %i\n", y, x);
	return 0;
}
