#include "main.h"

/**
 * print_alphabet_x10 -Program to print lower case alphabet in multiple of 10
 * Return: End of program
 * (Code by Hayzed)
 */
void print_alphabet_x10(void)
{
int alphabet;
int count;

count = 0;
while (count < 10)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
count++;
_putchar('\n');
}
}
