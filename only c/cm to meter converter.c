#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c;
    printf("Input the value in cm-\n");
    scanf("%d", &a);
    b=a/100;
    c=a%100;
    printf("Convert in meter- %d.%d m", b, c);
}
