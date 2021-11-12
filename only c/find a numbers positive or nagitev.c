#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if (a>0)
    {
        printf("The number is positive");
    }
    else if (a<0)
    {
        printf("The number is negative");
    }
    else{printf("The number is equal to 0");}
}
