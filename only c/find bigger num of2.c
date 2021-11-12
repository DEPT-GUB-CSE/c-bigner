#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf(" Input the value of a & b-\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("a is bigger then b");
    }
    if (a<b)
    {
        printf("b is bigger then a");
    }
    if (a==b)
    {
        printf("a is equal to b");
    }
}
