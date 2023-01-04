#include<stdio.h>
int main()
{
    int i,j,r,c,n,f;
    int count=0;
    int max;
    int index=-1;
    printf("Enter number of rows or columns:\n");
    scanf("%d %d",&r,&c);
       n=r*c;
    int a[r][c];
    int arr[r];
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
        count=0;
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
            arr[i]=count;
        }
    }
    max=arr[0];
    for(i=1;i<r;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            f=i;
        }
    }
     printf("Row with maximum number of 1 is %d",f);
    return 0;
}
