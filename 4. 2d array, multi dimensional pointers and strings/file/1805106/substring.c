#include<stdio.h>
char* substring(char *s,char *p)
{
    char *s1,*s2;
    while(*s!='\0')
    {
        if(*p==*s)
        {
            s1=s,s2=p;
            while(*s2!='\0'&& *s1==*s2)s1++,s2++;
            if(*s2=='\0')return s;
        }
        s++;
    }
    return NULL;
}
int main()
{
    char s1[10000],s2[10000];
    gets(s1);
    gets(s2);
    char *p=s1;
    int cnt=0;
    while(1)
    {
        p=substring(p,s2);
        if(p==NULL)
            break;
        cnt++;
        p++;
    }
    printf("%d\n",cnt);
}
