#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d=1,m=1;

    scanf("%d",&n);

    if(n<0){
        printf("nao existe\n");
    }
    else if(n==0){

        printf("1\n");}

    else if(n>0){

    do{
        m = m*d;
        d++;
    }while(d<=n);


    printf("%d\n",m);
 }

    return 0;
}
