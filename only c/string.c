#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10]="unix and c";
    printf("%s", str);
    printf("\n");
    str[6]='\0';
    printf("%s", str);
    printf("\n");
    printf("\n");
    printf(str);
    printf("\n");
    str[2]='%';
    printf(str);
    printf("\n");
    printf("\n");

    printf("2nd string");
    printf("\n");
    char your_line[100];
    printf("Enter a line:\n");
    gets(your_line);
    printf("\n");
    puts("Your input follows:\n");
    puts(your_line);
}
