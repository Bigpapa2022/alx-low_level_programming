#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success/correct)
 *(program by Hayzed)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
