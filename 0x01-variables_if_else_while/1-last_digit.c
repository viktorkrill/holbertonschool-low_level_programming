#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Greater than or 6
 * Return: 0  is the value to return
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %i is %i and is ", n, (n % 10));
if ((n % 10) == 0)
printf("0\n");
else if ((n % 10) > 5)
printf("greater than 5\n");
else
printf("less than 6 and not 0\n");
return (0);
 printf("the last digit of %i is %i and is greater than 5\n", n, (n % 10)); 
return (0);
}
