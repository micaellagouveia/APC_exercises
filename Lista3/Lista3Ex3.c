#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h=0,d=0,soma=0;
    scanf("%d",&h);
    do{
        soma = soma +d;
        d++;

    } while(d<=h);
    printf("%d",soma);
    return 0;
}
