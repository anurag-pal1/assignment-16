#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c];
    printf("Enter elements of first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("\nTranspose of given matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

