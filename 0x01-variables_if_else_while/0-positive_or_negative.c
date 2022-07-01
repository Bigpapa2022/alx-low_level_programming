#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - Determine if a random number is positive, negative or zero.
 *Return: End of program
 */
int main(void) 
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n == 0)
	{
		printf("%d is %s\n", n, "zero");
       	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	return (0);
}
