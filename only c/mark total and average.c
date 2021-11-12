#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1, m2, m3, m4, m5, total, Average;
    printf("Input the values-\n");
    scanf("%d %d %d %d %d",&m1, &m2, &m3, &m4, &m5);
    total=m1+m2+m3+m4+m5;
    Average=total/5;
    printf("Total= %d", total);
    printf("Average= %d", Average);
}
