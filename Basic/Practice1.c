

//-------------------------------------------------------
// Logic to find out power of any number
/*
#include<stdio.h>
int main()
{
    int base,exp;
    int result = 1;
    printf("Enter the base and exp:\n");
    scanf("%d %d",&base,&exp);
    if(exp>=0)
    {
        int i=0;
        while(i<exp)
        {
            result = result * base;
            i++;
        }
    }
    printf("Base %d exp %d = results %d\n",base,exp,result);

    return 0;
}
*/
//---------------------------------------------
//using While loop with printf
/*
#include<stdio.h>
int main()
{
    int a[5] ={1,2,3,4,5};
    int i=0;
    while(i<5 && printf("%d ",a[i++]))
    {}

    return 0;
}
/*
---------------------------------------------------
// Printf elements of array with out using semicolon on printf
/*
#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    static int i=0;
    if(printf("%d",a[i])&& ++i<5 && main());

    return 1;
}

*/