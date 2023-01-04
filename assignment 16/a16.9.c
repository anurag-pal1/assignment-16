#include<stdio.h>
int main()
{
    int i,j,r,c,n;
    int count=0;
    printf("Enter number of rows or columns:\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    n=r*c;
    printf("Enter %d numbers:\n",n);
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
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>(n/2))
    {
        printf("\nMatrix is a sparse matrix.\n");
    }
    else
    {
        printf("\nMatrix is a dense matrix.\n");
    }
    return 0;
}
