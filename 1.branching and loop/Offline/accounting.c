#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double d=0;
    if(n<=100)
        d+=n*0.5;
    else
    {
        d+=50.0;
        n-=100;
        if(n<=100)
            d+=n*0.8;
        else
        {
            d+=80.0;
            n-=100;
            d+=n*1.2;
        }
    }
    printf("%.2f\n",d);
    return 0;
}
