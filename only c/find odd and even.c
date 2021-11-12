#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,f;
    printf("Input number:\n");
    scanf("%d",&a);
    f=a%2;
    if (f==0)
    {
        printf("a is even number");
    }
    else
    {
        printf("a is odd number");
    }

}
