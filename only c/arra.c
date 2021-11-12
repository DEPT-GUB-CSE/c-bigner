#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10][10],i,j,row,collm;
    printf("row=");
    scanf("%d",&row);
    printf("collm=");
    scanf("%d",&collm);
    for(i=0;i<row;i++)
    {
        for(j=0;j<collm;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
  for(i=0;i<row;i++)
    {
        for(j=0;j<collm;j++)
        {
            printf("%d ",arr[i][j]);
        }
    printf("\n");
    }
}
