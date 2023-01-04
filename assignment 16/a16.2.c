#include<stdio.h>
int main()
{
    int i,j,r,k,c;
    int sum=0;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],s[r][c];
    printf("Enter elements of first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
           sum=0;
           for(k=0;k<c;k++)
           {
               sum=sum+(a[i][k]*b[k][j]);
           }
           s[i][j]=sum;
       }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
