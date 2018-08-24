#include <stdio.h>

int main void
{
int b;
for(b = 1; b <=100; b++)
{
if(!(b % 15))
printf("FizzBuzz");
else if(!(b % 3))
printf("Fizz");
else if(!(b % 5))
printf("Buzz");
else
printf("\n");
}
}
