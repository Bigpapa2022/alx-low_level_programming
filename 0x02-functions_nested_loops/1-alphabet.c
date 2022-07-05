#include "main.h"

/**
 *print_alphabet- code to  print alphabet in lowercase
 *Return: End of program
 *(Code by Hayzed)
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
