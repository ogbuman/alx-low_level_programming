#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - assign a random number for n
*return: return 0
*prints the status of n
*Result: alway returns 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive", n);
else if (n == 0)
prinf("%d is zero", n);
else if (n < 0)
prinf("%d is negative", n);
return (0);
}
