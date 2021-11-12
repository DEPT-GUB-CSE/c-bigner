#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, rN = 0, rem, orN;
    printf("Enter an integer:\n");
    scanf("%d", &n);
    orN = n;

    while (n != 0)
        {
        rem = n % 10;
        rN = rN * 10 + rem;
        n /= 10;
        }


    if (orN == rN)
    {
        printf("%d is a palindrome.", orN);
    }else{
        printf("%d is not a palindrome.", orN);
    }
}
