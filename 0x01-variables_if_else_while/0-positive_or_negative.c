#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
*main - this is the entry point for the code
*prints the status of n
*Result: alway returns 0
*/
/* betty style doc for function main goes there */
int main(void)  
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if(n > 0)
printf("%d is positive", n );
else if(n == 0)
prinf("%d is zero", n );
else if(n < 0){
prinf("%d is negative", n );
return (0);
}
