#include "main.h"
/**
* jack_bauer - Print every minute of the day of Jack Bauer
* Return: 0 always
* Description: Start from 00:00 to 23:59
*/
void jack_bauer(void)
{
int m = 0; /*minutes*/
int a = 0, b = 0, c = 0, d = 0;
while (m < 1440)/*60 times 24 = 1440, so we have 1440 mins in 24hrs*/
{
_putchar(a + '0');/*print a added to 0 char bit*/
_putchar(b + '0');
_putchar(':'); /*print double column*/
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
d++;/*increment d and go to the if statement*/
if (d > 9) /*if false ignore updating d to 0*/
{
d = 0; /*otherwise set d back to zero*/
c++;/*increment*/
}
if (c > 5)
{
c = 0;
b++;
}
if (b > 9)/*same goes here*/
{
b = 0;
a++;
}
m++;/*increment minutes before the next cycle or iteration*/
}
}
