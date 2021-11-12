#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter the Values\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b&&a>c)
    {
        printf("a is bigger then b and c");
    }
    else if (b>c&&b>a)
    {
        printf("b is bigger then a and c");
    }
    else if (c>a&&c>b)
    {
        printf("c is bigger then a and b");
    }else
    {
        printf("wrong input");
    }
}
