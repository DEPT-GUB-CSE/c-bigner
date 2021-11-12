#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c, a[10][10], b[10][10], sum[50][50], i,j;
    printf("\t\n Multi-dimensional arra");
    printf("\n Enter the row matrix:");
    scanf("%d",&r);
    printf("\n Enter the col matrix:");
    scanf("%d",&c);
    printf("\n Element of A matrix");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("\n a[%d}[%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix A: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Eliment of B matrix");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("\n b[%d}[%d]",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix B: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n Addition of matrix");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<r;j++)
        {
            printf("\t %d",sum[i][j]);
        }
        printf("\n\t");
    }
    if(j==c-1)
    {
        printf("\n");
    }
    return 0;
}
