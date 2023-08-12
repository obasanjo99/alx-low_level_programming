#include<stdio.h>
/**
 * main - entry point
 * description - size of c
 * Return: Always 0 (sucess)
 */
int main(void)
{
printf("Size of a char:1 byte(s)", sizeof(char));
printf("Size of an int:4 byte(s)", sizeof(int));
printf("Size of a long:8 byte(s)", sizeof(long int));
printf("Size of a long long int:8 byte(s)", sizeof(long long int));
printf("Size of a float: 4 byte(s)", sizeof(float));
return (0);
}
