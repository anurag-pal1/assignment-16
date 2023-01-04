#include<stdio.h>
int main()
{
    int i,j,r,c;
    int sum=0;
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
            if((i+j)==(r-1))
                sum=sum+a[i][j];
        }
    }
    printf("\nSum of elements of right diagonal are:%d",sum);
    return 0;
}
