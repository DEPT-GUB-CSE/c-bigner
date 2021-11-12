#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("enter the alphabet:");
    scanf("%c",&a);
    if (a=='a' || a=='A' || a=='e' || a=='E' || a=='o' || a=='O' || a=='u' || a=='U'|| a=='i' || a=='I')
    {
        printf("the alphabet is vowel");
    }
    else
    {
        printf("the alphabet is consonant");
    }
}
