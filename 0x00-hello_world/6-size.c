#include<stdio.h>
/**
 * main - entry point
 * description - size of c
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char charType;
	int intType;
	long longType;
	long long int longType;
	float floatType;
printf("Size of a char:%lu  byte(s)\n", sizeof(charType));
printf("Size of an int:%lu  byte(s)\n", sizeof(intType));
printf("Size of a long:%lu  byte(s)\n", sizeof(longType));
printf("Size of a long long int:%lu  byte(s)\n", sizeof(long long Type));
printf("Size of a float:%lu  byte(s)\n", sizeof(float));
return (0);
}
