#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans=0,a,b,temp,i;
    for(i=1;i<n;i++)
    {
        a=n;
        b=i;
        while(b)
        {
            temp=a%b;
            a=b;
            b=temp;
        }
        if(a==1)ans++;
    }
    printf("%d\n",ans);
    return 0;
}
