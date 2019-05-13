#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas,soma;
    int f;
    for(f=1;f<=30; f++){
        scanf("%d",&horas);
        soma = soma + horas;
    }
    printf("%d",soma);



    return 0;
}
