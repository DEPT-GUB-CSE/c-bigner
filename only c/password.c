#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char password[16],work;
    printf("Password: ");
    do{
    gets(password);
    if((password[0]=='1') && (password[1]=='3') && (password[2]=='2') && (password[3]=='3'))
    {
        printf("\nlock open");
        work=1;
    }
    else
    {
        printf("wrong password \n");
        work=0;
    }
    }while(strcmp(work,'0')==0);
}
