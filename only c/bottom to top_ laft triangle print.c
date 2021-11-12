#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, num;
    printf("Inter any number:");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        for(j=i; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
