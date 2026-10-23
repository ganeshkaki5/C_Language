// Little or big endian
#include<stdio.h>
int main()
{
    int i=1;
    char *cp;
    cp = &i;

    if(*cp == 1)
       printf("Little..\n");
    else
       printf("Big..\n");


    return 0;
}
