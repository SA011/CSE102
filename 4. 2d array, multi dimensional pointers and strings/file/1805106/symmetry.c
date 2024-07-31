#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,pos=1;
    scanf("%d",&n);
    int **mat=(int**)malloc(sizeof(int*)*n);
    if(mat==NULL)
    {
        printf("Invalid dimension for a matrix\n");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        mat[i]=(int*)malloc(sizeof(int)*n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mat[i][j]!=mat[j][i])
            {
                pos=0;
            }
        }
    }
    if(pos)
        printf("YES\n");
    else
        printf("NO\n");
    for(int i=0;i<n;i++)
        free(mat[i]);
    free(mat);
    return 0;
}
