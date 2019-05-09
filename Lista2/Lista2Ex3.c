#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%7==0)
    {
        printf("MULTIPLO\n");
    }
    else
    {
        printf("NAO E MULTIPLO\n");
    }


    return 0;
}
