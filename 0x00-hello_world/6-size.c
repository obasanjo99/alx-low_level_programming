#include<stdio.h>
/**
 * main - entry point
 * description - size of c
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long int d;
	float e;
printf("Size of a char:%lu  byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int:%lu  byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long:%lu  byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int:%lu  byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float:%lu  byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
