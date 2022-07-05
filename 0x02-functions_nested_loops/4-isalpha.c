#include "main.h"

/**
 *_isalpha - To detect lowercase or uppercase
 * @c: The int to print
 *Return: End of program
 *(Code by Hayzed)
 */

int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
