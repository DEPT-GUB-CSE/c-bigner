#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Here input q, a, b\n");
    printf("q=1 is +\n");
    printf("q=2 is - \n");
    printf("q=3 is * \n");
    printf("q=4 is / \n");
    int q, a, b, sum1, sum2, sum3, sum4;
    scanf("%d %d %d" , &q,&a,&b);
        sum1=a+b;
        sum2=a-b;
        sum3=a*b;
        sum4=a/b;
            if(q==1)
                printf("sum= %d",sum1);
            if(q==2)
                printf("sum= %d",sum2);
            if(q==3)
                printf("sum= %d",sum3);
            if(q==4)
                printf("sum= %d", sum4);
    return 0;
}
