#include <stdio.h>

/**
 * main - Entry point
 * description - Prints all single digit numbers .
 *
 * Return: Alway 0(success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
