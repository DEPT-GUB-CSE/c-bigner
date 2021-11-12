#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, space, row, k=0;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    for (i=row; i>=1; --i,k=0)
    {
        for (space=1; space<=row-i; ++space)
        {
            printf("  ");
        }
        while (k!=2*i-1)
        {
            printf(" 1");
            ++k;
        }
        printf("\n");
    }
}
