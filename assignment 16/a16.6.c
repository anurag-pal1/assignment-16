#include<stdio.h>
int main()
{
    int i,j,r,c,sum=0;
    printf("Enter number of rows and columns of array:\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter %d numbers:\n",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
        printf("Sum of elements of %d row is %d\n",i,sum);
    }
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+a[j][i];
        }
        printf("Sum of elements of %d column is %d\n",i,sum);
    }
    return 0;
}
