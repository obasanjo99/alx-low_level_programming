#include <stdio.h>
/**
  *main - Entry point
  *description - prints numbers of base 16 in lowercase
  *Return: 0 (success)
*/
int main(void)
{
int j;
for (j = 0; j <= 15; j++)
{
printf("%x", j);
}
printf("\n");
return (0);
}

