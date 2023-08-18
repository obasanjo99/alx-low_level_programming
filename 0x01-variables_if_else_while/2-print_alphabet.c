#include<stdio.h>
/**
 * main - Entry point
 * description - write a program that prints the alphabet in lower case followed by new line 
 * Return: Always 0 (success)
 */
int main()
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}

