#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    (year%400==0?1:(year%100==0?0:(year%4==0?1:0)))?printf("Leap Year\n"):printf("Not a leap year\n");
    return 0;
}
