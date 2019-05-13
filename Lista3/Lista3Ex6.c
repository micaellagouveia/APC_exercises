#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i=0;
    float media=0;
    int soma=0;
    do{
    scanf("%d",&a);
    if (a>=0){
         soma+=a;
         i++;}
        }while(a>=0);

    media = (float)soma/(float)i;
    printf("%d\n",soma);
    printf("%.1f",media);





    return 0;
}
