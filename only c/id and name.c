#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char lname[81], fname[81];
	int  count, id_num;
	puts ("Enter the last name, first name, ID number separated");
	puts ("by spaces, then press Enter \n");
	count = scanf ("%s%s%d", fname, lname,&id_num);
	printf ("%d items entered: %s %s %d\n",count,fname,lname,id_num);
}
