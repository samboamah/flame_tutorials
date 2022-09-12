#include <stdio.h>

/**
 * main - a program that greets and compliments the user.
 * use the string %s method
 *
 * printf("Hello %s!\n", "Flame");
 * the string above worked. Lets us use arrays now
 * char included, - arrays!
 * [31] a number we chose as highest input allowed in the string
 * return = 0
 */
int main (void)
{
	char name[31];
	printf("Hello there, please tell me your name: \n");
	scanf("%s", name);

	printf("Hello %s!\nYou look very nice today\n", name);

	return 0;
}
