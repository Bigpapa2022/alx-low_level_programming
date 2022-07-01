#include<stdio.h>
/**
 *main - Entry point
 *Return: End of program
 *(Program by Hayzed)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;
		if (alphabet == 'e')
			continue;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
