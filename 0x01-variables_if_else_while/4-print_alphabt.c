#include<stdio.h>
/**
 * main - Entry point
 * description - write a program that prints the alphabeth in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
