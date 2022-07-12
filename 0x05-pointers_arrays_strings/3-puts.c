#include <stdio.h>
#include "main.h"
/**
*_puts - prints a string
*@str: A pointer to a char that will be changed
*(Code by Hayzed)
*Return: void which means our answer is correct
*/

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
printf("%c", c[m]);
printf("\n");
}
}
