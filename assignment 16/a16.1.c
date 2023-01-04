#include<stdio.h>
int main()
{
    int i,j,r,c;
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
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of given two matrices are:\n");
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
