#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    x-=((int)(x/360))*360;
    x=(x*3.1415926535)/180;
    double ans=0,m=1;
    int n=1;
    while(n<=100)
    {
        if(n%2)ans+=m;
        else ans-=m;
        m*=(x*x)/((2*n-1)*2*n);
        n++;
    }
    if((ans<0?-ans:ans)<=0.0000005)ans=0;
    printf("%f\n",ans);
    return 0;
}
