#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, j;
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }for (i=a; i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
