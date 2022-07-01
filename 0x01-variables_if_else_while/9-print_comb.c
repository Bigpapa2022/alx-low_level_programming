#include<stdio.h>
/**
 *main - Entry point
 *Return: End of program
 *(Program by Hayzed)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit == 57)
		{
			break;
		}
		putchar(',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
