#include<stdio.h>
#define abs(x) (((x)<0)?(-(x)):(x))

void check(double a,double b,double c,int *ans)
{
    *ans=0;
    *(ans+1)=0;
    if(a+b<=c||a+c<=b||b+c<=a)
        return;
    *ans=1;
    if(abs(a*a+b*b-c*c)<=0.000001||abs(a*a+c*c-b*b)<=0.000001||abs(b*b+c*c-a*a)<=0.000001)
        *(ans+1)=1;
    return;
}

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    int ans[2]={0};
    check(a,b,c,ans);
    if(ans[0]&&ans[1])
        printf("The Triangle is POSSIBLE and it's a RIGHT ANGLE TRIANGLE\n");
    else if(ans[0])
        printf("The Triangle is POSSIBLE but it's NOT a right angle triangle.\n");
    else
        printf("The Triangle is IMPOSSIBLE\n");
    return 0;
}
