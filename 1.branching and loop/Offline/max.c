#include<stdio.h>
int main()
{
    char c;
    int x=0,i=0;
    scanf("%c",&c);
    while(c!='\n')
    {
        if(c-'0'>x)
        {
            x=c-'0';
            i=1;
        }
        else if(c-'0'==x)
            i++;
        scanf("%c",&c);
    }
    printf("%d\n",i);
    return 0;
}
