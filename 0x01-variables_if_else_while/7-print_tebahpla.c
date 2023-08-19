#include<stdio.h>
/**
 * main - Entry point
 * description - write a program that prints the alphabet inlowercase
 * Return: Always 0 (success)
 */
int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a' ; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}

