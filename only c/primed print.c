#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, space, row, k=0;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    for (i=1; i<=row; ++i,k=0)
    {
        for (space=1; space<=row-i; ++space)
        {
            printf("  ");
        }
       do
        {
            printf("* ");
            ++k;
        } while (k!=2*i-1);
        printf("\n");
    }
}
